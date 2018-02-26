program: program.c
	@gcc -std=gnu99 -Wall program.c -o program

answer: 
	@gcc -std=gnu99 -Wall answer.c -o answer -s

flag: answer program
	@./program | ./answer

solution: solution.c
	@gcc -std=gnu99 -Wall solution.c -o solution

test: solution answer
ifeq ($(tv),)
	@./publish.sh -tv
else
	@./solution | ./answer
endif

publish: answer
ifeq ($(m),)
	@./publish.sh
else
	@./publish.sh -m "$(m)"
endif

clean:
	@rm -rf program solution
