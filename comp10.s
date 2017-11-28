.text
.global main
//this function compares a value to 10

comp10:

	pushl	%ebp
	movl	%esp, %ebp

	movl	8(%ebp),%ebx

	cmp	$10, %ebx		//does not overwrite


	jle	lessEq

	pushl	%ebx
	pushl	$greaterStr
	jmp	end

lessEq:

	pushl	%ebx
	pushl	$lessEqStr



end:
	call	printf
	popl	%ebx

main:
	
	pushl	%ebp
	movl	%esp,%ebp
	
	pushl	$7
	call	comp10


	popl 	%ebp     //leave know pop stacks 
	ret


.data 
	
lessEqStr:
	.string  "%d is less than or equal  10\n"
greaterEqStr:
	.string "%d is greater than 10\n"
