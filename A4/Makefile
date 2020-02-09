OBJS = main.o Control.o View.o Storage.o Student.o CourseList.o Course.o Monitor.o GPAMonitor.o FWMonitor.o

sas:	$(OBJS)
	g++ -o sas $(OBJS) StuServer.o

main.o:	main.cc Control.h defs.h
	g++ -c main.cc

Control.o:	Control.cc Control.h Storage.h View.h Student.h Monitor.h GPAMonitor.h FWMonitor.h StuServer.o
	g++ -c Control.cc

FWMonitor.o:	FWMonitor.cc FWMonitor.h Monitor.h
	g++ -c FWMonitor.cc

GPAMonitor.o:	GPAMonitor.cc GPAMonitor.h Monitor.h
	g++ -c GPAMonitor.cc

Monitor.o:	Monitor.cc Monitor.h Student.h
	g++ -c Monitor.cc

View.o:	View.cc View.h Storage.h
	g++ -c View.cc

Storage.o:	Storage.cc Storage.h Student.h defs.h
	g++ -c Storage.cc

Student.o:	Student.cc Student.h Course.h CourseList.h
	g++ -c Student.cc

CourseList.o:	CourseList.cc CourseList.h List.h Course.h
	g++ -c CourseList.cc

Course.o:	Course.cc Course.h
	g++ -c Course.cc

clean:
	rm -f $(OBJS) sas
