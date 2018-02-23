all: answer
	@./answer $(flag)

answer: 
	@gcc -std=gnu99 -Wall -s answer.c -o answer

solution: solution.c
	@gcc -std=gnu99 -Wall solution.c -o solution

test: answer solution
ifeq ($(tv),)
	@./publish.sh -tv
else
	@./solution
endif

publish: answer
ifeq ($(m),)
	@./publish.sh
else
	@./publish.sh -m "$(m)"
endif

clean:
	@rm -rf program solution
