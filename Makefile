a.out: AddEvent.o DeleteEvent.o EditEvent.o FindEvent.o Main.o PrintCalendar.o SaveEvents.o SyncEvents.o ViewEvents.o
	cc AddEvent.o DeleteEvent.o EditEvent.o FindEvent.o Main.o PrintCalendar.o SaveEvents.o SyncEvents.o ViewEvents.o -o a.out
AddEvent.o: AddEvent.c
	cc -c AddEvent.c
DeleteEvent.o: DeleteEvent.c
	cc -c DeleteEvent.c
EditEvent.o: EditEvent.c
	cc -c EditEvent.c
FindEvent.0: FindEvent.c
	cc -c FindEvent.c
Main.o: Main.c
	cc -c Main.c
PrintCalendar.o: PrintCalendar.c
	cc -c PrintCalendar.c
SaveEvents.o: SaveEvents.c
	cc -c SaveEvents.c
SyncEvents.o: SyncEvents.c
	cc -c SyncEvents.c
ViewEvents.o: ViewEvents.c
	cc -c ViewEvents.c

clean:
	rm *.o a.out
