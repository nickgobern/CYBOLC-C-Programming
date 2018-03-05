program: program.c
	@gcc -std=gnu99 -Wall -DPT -DAU -DAG program.c -o program

answer: answer.c
	@gcc -std=gnu99 -Wall -s answer.c -o answer

flag: program platinum gold silver
	-@./answer 2>/dev/null || true
	@make -s clean

solution: solution.c splatinum sgold ssilver answer
	@gcc -std=gnu99 -std=gnu99 -Wall -DPT -DAU -DAG solution.c -o solution

splatinum: solution.c
	@gcc -std=gnu99 -Wall -DPT solution.c -o platinum

sgold: solution.c
	@gcc -std=gnu99 -Wall -DAU solution.c -o gold

ssilver: solution.c
	@gcc -std=gnu99 -Wall -DAG solution.c -o silver
	
platinum: program.c
	@gcc -std=gnu99 -Wall -DPT program.c -o platinum

gold: program.c
	@gcc -std=gnu99 -Wall -DAU program.c -o gold

silver: program.c
	@gcc -std=gnu99 -Wall -DAG program.c -o silver


test: solution
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
	@rm -rf program solution platinum gold silver
