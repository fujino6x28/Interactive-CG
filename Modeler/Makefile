PROG := Modeler
SRCS := modelerview.cpp linearcurveevaluator.cpp main.cpp modelerapp.cpp modelerdraw.cpp modelerui.cpp particleSystem.cpp point.cpp rect.cpp rulerwindow.cpp animatoruiwindows.cpp camera.cpp color.cpp curve.cpp curveevaluator.cpp graphwidget.cpp imageio.cpp indicatorwindow.cpp
OBJS := $(SRCS:%.cpp=%.o)
DEPS := $(SRCS:%.cpp=%.d)

CC := g++-8
CCFLAGS := -std=c++17 -Wdeprecated-declarations
INCLUDEPATH := -I/opt/X11/include/
LIBPATH := -L/usr/X11/lib
LIBS := -framework OpenGL -lfltk -lfltk_gl -lfltk_images -lpthread -lfltk_forms -ljpeg -lpng -lx11


all: $(DEPENDS) $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CCFLAGS) -o $@ $^ $(LIBPATH) $(LIBS)

.cpp.o:
	$(CC) $(CCFLAGS) $(INCLUDEPATH) -MMD -MP -MF $(<:%.cpp=%.d) -c $< -o $(<:%.cpp=%.o)


.PHONY: clean
clean:
	$(RM) $(PROG) $(OBJS) $(DEPS)

-include $(DEPS)
