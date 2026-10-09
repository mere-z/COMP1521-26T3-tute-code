N_SIZE = 10

.text
	# t0 - i
	# t1 - array address start
	# t2 - offset 
main: 
main_add_42_loop_init:
	li	$t0, 0
main_add_42_loop_cond:
	bge	$t0, N_SIZE, main_add_42_loop_end
main_add_42_loop_body:
	la	$t1, numbers # start array 
	# get the offset of the ith element 
	mul	$t2, $t0, 4	
	add	$t1, $t1, $t2	# &numbers[i]
	lw	$t3, ($t1)	# numbers[i]

	bge	$t3, N_SIZE, main_add_42_loop_step
	add	$t3, $t3, 42
	sw	$t3, ($t1)

	move	$a0, $t3
	li	$v0, 1
	syscall

main_add_42_loop_step:
	addi	$t0, 1
	b	main_add_42_loop_cond
main_add_42_loop_end:
	jr	$ra


.data

numbers:
	.word 0, 1, 2, -3, 4, -5, 6, -7, 8, 9