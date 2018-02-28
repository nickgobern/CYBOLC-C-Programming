all: program

program: program.c utility.c
	@gcc -std=gnu99 -Wall program.c utility.c -o program

answer: 
	@gcc -std=gnu99 -Wall -s answer.c utility.c -o answer

flag: answer 
	@./program
	@./answer

solution: solution.c utility.c
	@gcc -std=gnu99 -Wall solution.c utility.c -o solution

test: solution answer
ifeq ($(tv),)
	@./publish.sh -tv
else
	@./solution
	@./answer
endif

publish: solution
ifeq ($(m),)
	@./publish.sh
else
	@./publish.sh -m "$(m)"
endif

clean:
	@rm -rf program solution packet
