#
# This is the makefile for the practice exam. Students can use this to perform a
# basic check on their work. Edge cases are NOT checked.  To perform a basic
# check of your work as you go type: 
#    make checkit
#
# This will perform a single unit test on each question and report how it is 
# calling your function, the expected and actual values. This makefile does
# NOT produce an executable but instead a shared library.
# 
# 

UNDEFINE_STR=`cat definesFile.txt`

DEFINE_STR=-DSUPPRESS_PRACTICE_QUESTION_1 -DSUPPRESS_PRACTICE_QUESTION_2 -DSUPPRESS_PRACTICE_QUESTION_3 -DSUPPRESS_PRACTICE_QUESTION_4 -DSUPPRESS_PRACTICE_QUESTION_5

all: answer solution grader grade

#These 3 are student targets
#Run: "make checkit" to compile and smoke test your answers
check:
	LD_LIBRARY_PATH=. ; export LD_LIBRARY_PATH ; ./StudentFileChecker

checkit: answer check

answer: checkvalid
	gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) $(UNDEFINE_STR)
	gcc -shared -o studTest.so mytest.o -lm -ldl

ans1valid:
	rm -f mytest.o
	-gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) -USUPPRESS_PRACTICE_QUESTION_1 
	if [ -f mytest.o ] ; \
	then echo " -USUPPRESS_PRACTICE_QUESTION_1" >> definesFile.txt ; \
	fi

ans2valid:
	rm -f mytest.o
	-gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) -USUPPRESS_PRACTICE_QUESTION_2 
	if [ -f mytest.o ] ; \
	then echo " -USUPPRESS_PRACTICE_QUESTION_2" >> definesFile.txt ; \
	fi

ans3valid:
	rm -f mytest.o
	-gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) -USUPPRESS_PRACTICE_QUESTION_3 
	if [ -f mytest.o ] ; \
	then echo " -USUPPRESS_PRACTICE_QUESTION_3" >> definesFile.txt ; \
	fi

ans4valid:
	rm -f mytest.o
	-gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) -USUPPRESS_PRACTICE_QUESTION_4 
	if [ -f mytest.o ] ; \
	then echo " -USUPPRESS_PRACTICE_QUESTION_4" >> definesFile.txt ; \
	fi

ans5valid:
	rm -f mytest.o
	-gcc -c program.c -fpie -fPIC -o mytest.o $(DEFINE_STR) -USUPPRESS_PRACTICE_QUESTION_5 
	if [ -f mytest.o ] ; \
	then echo " -USUPPRESS_PRACTICE_QUESTION_5" >> definesFile.txt ; \
	fi

cleandefines:
	-rm -f definesFile.txt

checkvalid: cleandefines ans1valid ans2valid ans3valid ans4valid ans5valid
	echo $(UNDEFINE_STR)
	
checker:
	gcc StudentFileChecker.c -Wall -o StudentFileChecker -ldl -lm

solution:
	gcc -c solution.c -fpie -fPIC -o solution.o 
	gcc -shared -o solution.so solution.o -lm -ldl

grader:
	gcc -Wall Grader.c -o chkfnl -ldl -lm 

grade: grader solution answer
	LD_LIBRARY_PATH=. ; export LD_LIBRARY_PATH ; ./chkfnl

clean:
	rm -f *.o studTest.so solution.so chkfnl definesFile.txt StudentFileChecker ExamTemp-*


