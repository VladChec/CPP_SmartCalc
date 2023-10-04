src=$(wildcard *.c)
obj=$(src:.c=.o)
COMPILER=g++
FLAGS= -Wall -Werror -Wextra
PROJECT_NAME= frontCalc
c_flags=-c -Wall -Werror -Wextra -std=c11
check_flags=$(shell pkg-config --libs check)
gcov_flags=--coverage

ifeq ($(OS), Darwin)
	TEST_FLAGS=-lcheck -lpthread -pthread -lrt -lm -lsubunit 
else
	TEST_FLAGS=-lcheck
endif

all: clean install 


install: 
	rm -rf install
	mkdir install
	cd Install && qmake ../s21Calc_v2/s21Calc_v2.pro && make && mv s21Calc_v2.app ../
	cd Install && rm -rf *.* && rm -rf Makefile && rm -rf .qmake.stash
	cd ..
	chmod 777 s21Calc_v2.app/
	open s21Calc_v2.app/

uninstall:
	rm -rf s21Calc_v2.app/

clean: 
	rm -rf docs/html/search && rm -rf docs/html
	rm -rf Install/*.* && rm -rf Install/Makefile && rm -rf Install/.qmake.stash
	rm -rf report && rm -rf test.c s21Calc_v2.gc* test1
	rm -rf *.o *.a *.tar *.app Calc
	rm -rf *.gcda *.gcno *.info
	rm -rf ./*/*.o ./*/*.a 

dvi:
	cd doxygen && doxygen 
	open doxygen/html/index.html

dist: 
	rm -rf Calc
	mkdir Calc
	cp -R Model s21Calc_v2 Controller tests Calc/ && cp Makefile Calc/  && cp -R s21Calc_v2 Calc  && cp -R doxygen Calc
	tar  -zcf s21Calc_v2_inst.tar Calc
	rm -rf Calc

model.a: $(obj)
	ar rc model.a $(obj)
	ranlib model.a

%_test.o: %.c
	g++ $(c_flags) $< -o $@ $(gcov_flags) $(check_flags)


tests:	clean
	g++ -g --coverage -Wall -Werror -Wextra -std=c++17 -c ./Model/model.cpp -o model.o
	g++ -g --coverage -Wall -Werror -Wextra -std=c++17 -c ./tests/test.cc -o tests.o
	g++ -g --coverage -Wall -Werror -Wextra model.o tests.o -o test1 -lgtest -lpthread 
	./test1
	
gcov_report:	
	g++ -g --coverage -Wall -Werror -Wextra -std=c++17 -c ./Model/model.cpp -o model.o
	g++ -g --coverage -Wall -Werror -Wextra -std=c++17 -c ./tests/test.cc -o tests.o
	g++ -g --coverage -Wall -Werror -Wextra model.o tests.o -o test1 -lgtest -lpthread 
	./test1
	# $(COMPILER) --coverage $(TEST_FLAGS) $(FLAGS) model.cpp ./test/tests.cc -o test1 -g	
	# ./test
	lcov -t "test" -o test.info -c -d . --ignore-errors mismatch,mismatch 
	genhtml -o report test.info
	open report/index.html	
	

