CXXFLAGS = -g -Wall
SRCDIR = src
BUILDDIR = build
TESTDIR = test
TEST = bin/tester
CXXTEST = cxxtestgen --error-printer -o

TARGET = bin/runner

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

tester.cpp: $(TESTDIR)/*.h $(OBJ)
	@echo "Creating test runner..."
	$(CXXTEST) $(TESTDIR)/$@ $(TESTDIR)/*.h	


# tester:
# 	@echo " Creating a test runner"

# 	$(CXX) -o tester $(TESTDIR)/tester.cpp

.PHONY: clean
