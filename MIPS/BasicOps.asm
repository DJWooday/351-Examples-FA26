# v0
li $s0 2
li $s1 3
li $s2 2
# v1
li $s3 1
li $s4 1
li $s5 9

# 4v0
mul $t0 $s0 4
mul $t1 $s1 4
mul $t2 $s2 4

add $t3 $s3 $t0
add $t4 $s4 $t1
add $t5 $s5 $t2

move $s0 $t3
move $s1 $t4
move $s2 $t5

li $t0 2132112
li $t1 44634
mult $t0 $t1

mflo $s0
mfhi $s1

li $t0 9
li $t1 4
div $t0 $t1

mflo $s0
mfhi $s1