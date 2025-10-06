PROBLEM_ID=abc422_a
PROBLEM_URL=https://atcoder.jp/contests/abc350/tasks/
EXEC=main

download:
	oj d $(PROBLEM_URL)$(PROBLEM_ID)

build:
	g++ -std=c++20 -Wall -O2 -o $(EXEC) $(PROBLEM_ID).cpp

test: build
	oj t -c "./$(EXEC)"

submit:
	oj s $(PROBLEM_URL)/$(PROBLEM_ID) ./$(EXEC)

clean:
	rm -f $(EXEC)
