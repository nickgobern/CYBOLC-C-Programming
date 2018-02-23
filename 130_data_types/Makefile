program: program.c
	@gcc -std=gnu99 -Wall -lm program.c -o program

answer: answer.c
	@gcc -std=gnu99 -Wall -s -lm answer.c -o answer

flag: program
	-@./answer 2>/dev/null || true
	@make -s clean

solution: solution.c answer
	@gcc -std=gnu99 -Wall -lm solution.c -o solution

test: solution answer
ifeq ($(tv),)
	@./publish.sh -tv
	@make -s clean
else
	-@./answer 2>/dev/null || true
	@make -s clean
endif

publish: solution
ifeq ($(m),)
	@./publish.sh
else
	@./publish.sh -m "$(m)"
endif

clean: 
	@rm -rf program solution
