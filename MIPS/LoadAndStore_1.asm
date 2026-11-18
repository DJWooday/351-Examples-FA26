.data 
array: .word 10 20 30 40 50 60 70 80 90 100 110 120 130 140 150

.text
la $s3 array # A[]
li $s2 15 # h

# A[12] = h + A[8]
lw $t0 32($s3) # gets A[8]
add $t1 $s2 $t0 # h + A[8]
sw $t1 48($s3)

move $a0 $t1
li $v0 1
syscall