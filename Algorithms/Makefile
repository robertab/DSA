CXXFLAGS = -g -Wall -g3 -pedantic

# Directories
SRCDIR = src
BUILDDIR = build
TESTDIR = test

# cxxtestgen
CXXTEST = cxxtestgen --error-printer -o

# Executables
TEST = bin/tester
TARGET = bin/runner

# .cpp files
SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJ = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
INC = -I include


$(TARGET): $(OBJ)
	@echo "Linking..."
	$(CXX)  $^ -o  $(TARGET)


$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	mkdir -p $(BUILDDIR)
	$(CXX) $(CXXFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGET) $(TEST) $(TESTDIR)/tester.cpp"; $(RM) -r $(BUILDDIR) $(TARGET) \
	$(TEST) $(TESTDIR)/tester.cpp


test: tester.cpp $(OBJ)
	$(CXX) $(CXXFLAGS) -o bin/tester $(INC) test/tester.cpp $(OBJ);

tester.cpp: $(TESTDIR)/*.h 
	@echo "Creating test runner..."
	$(CXXTEST) $(TESTDIR)/$@ $(TESTDIR)/*.h	


# tester:
# 	@echo " Creating a test runner"

# 	$(CXX) -o tester $(TESTDIR)/tester.cpp

.PHONY: clean
