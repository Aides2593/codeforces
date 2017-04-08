if [ -d $1 ]; then
	echo "$1 is exists.Please create other folder"
else
	mkdir $1
	cp "sample.cpp" "$1/$1.cpp"
	touch "$1/Makefile"
	echo "debug:
	g++ -g $1.cpp
release:
	g++ -o $1 $1.cpp
clean:
	rm a.out $1" >> "$1/Makefile"
	echo "Done!"
fi

