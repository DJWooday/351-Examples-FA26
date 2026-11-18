.data
array: .word 10 20 30 40 50 60 70 80 90 100 120 130 140 150
h: .word 100

.text
la $s3 array
la $t9 h
lw $t1 0($t9) # load h
lw $t0 32($s3) # load A[8]
add $t8 $t1 $t0
sw $t8 60($s3)

li $v0 1
move $a0 $t8
syscall