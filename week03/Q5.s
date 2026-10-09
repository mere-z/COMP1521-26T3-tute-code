N_SIZE = 10

.text
	# t0 - x
	# t1 - array address calcs
main: 
main_scan_loop_init:
	li	$t0, 0
main_scan_loop_cond:
	bge	$t0, N_SIZE, main_scan_loop_end
main_scan_loop_body:
	# array start (numbers) + 
	# (i * size of an element) <- offset

	li	$t1, numbers	# &numbers
	mul	$t2, $t0, 4	# offset 
	add	$t1, $t1, $t2	# t1 = array start + offset

	li	$v0, 5		# scanf("%d", &numbers[i]);
	syscall 
	sw	$v0, ($t1)
main_scan_loop_step:
	addi	$t0, 1
	b	main_scan_loop_cond
	
main_scan_loop_end:

main_print_loop_init:
	li	$t0, 0
main_print_loop_cond:
	bge	$t0, N_SIZE, main_print_loop_end
main_print_loop_body:
	# array start (numbers) + 
	# (i * size of an element) <- offset

	la	$t1, numbers	# &numbers
	mul	$t2, $t0, 4	# offset 
	add	$t1, $t1, $t2	# t1 = array start + offset

	lw	$a0, ($t1)	# printf("%d\n", numbers[i]);
	li	$v0, 1
	syscall

	li	$a0, '\n'
	li	$v0, 11
	syscall
main_print_loop_step:
	addi	$t0, 1
	b	main_print_loop_cond
main_print_loop_end:
	jr	$ra


.data

numbers:
	.word 0:10