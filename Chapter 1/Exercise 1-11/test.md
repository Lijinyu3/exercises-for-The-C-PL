Exercise 1-11. How would you  test the word count program? What kinds of

input are most likely to uncover bugs if there are any?



Author:		Leee

Date:		2021-1-14 Thu.

Filename:	test.md

Page:		21




Refer to [this website](https://www.learntosolveit.com/cprogramming/Ex_1.11_test_word_count.html)

> Testing the word count program involves, giving three kinds of inputs.
>
> 1. Valid Inputs.
> 2. Boundary Condition Inputs.
> 3. Invalid Inputs.
>
> For Valid Inputs, it could be any stream of space separate text. It has valid space, newline and tab characters. For Boundary conditions, a file entirely consisting of n, or a file entirely consisting of t character or a empty file.
>
> For invalid Inputs, an unclosed file which does not have EOF, which is tricky to provide can be given to this program. A unicode character file can be given and see if getchar() handles it properly. We tested it and it works.

