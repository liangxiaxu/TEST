OBJ=cppEx.cpp
TAR=libcppEx.so
CXX=g++
CXXFLAGS=-shared -fPIC -Wall -g -o

$(TAR):$(OBJ)
	$(CXX) $(OBJ) $(CXXFLAGS) $(TAR)

clean:
	rm -f $(TAR)
