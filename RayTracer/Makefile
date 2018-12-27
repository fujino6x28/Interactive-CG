PROG := RayTracer
SRCS := $(wildcard *.cpp) $(wildcard ui/*.cpp) $(wildcard scene/*.cpp) $(wildcard parser/*.cpp) $(wildcard fileio/*.cpp) $(wildcard SceneObjects/*.cpp)
OBJS := $(SRCS:%.cpp=%.o)
DEPS := $(SRCS:%.cpp=%.d)

CC := g++-8
CCFLAGS := -std=c++17  -Wdeprecated-declarations
INCLUDEPATH := -I /opt/X11/include/
LIBPATH := -L/opt/X11/lib/
LIBS := -framework OpenGL -lfltk -lfltk_gl -lfltk_images -lpthread -lX11 -lpng -ljpeg


all: $(DEPENDS) $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBPATH) $(LIBS)

.cpp.o:
	$(CC) $(CCFLAGS) $(INCLUDEPATH) -MMD -MP -MF $(<:%.cpp=%.d) -c $< -o $(<:%.cpp=%.o)


.PHONY: clean
clean:
	$(RM) $(PROG) $(OBJS) $(DEPS)

-include $(DEPS)
