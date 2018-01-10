<<<<<<< HEAD
## -*- Makefile -*-
##
## User: Steve
## Time: Jan 10, 2018 1:56:15 PM
## Makefile created by Oracle Developer Studio.
##
## This file is generated automatically.
##


#### Compiler and tool definitions shared by all build targets #####
CCC = g++
CXX = g++
BASICOPTS = -g
CCFLAGS = $(BASICOPTS)
CXXFLAGS = $(BASICOPTS)
CCADMIN = 


# Define the target directories.
TARGETDIR_OOAD_Stuffs.exe=GNU-amd64-Windows


all: $(TARGETDIR_OOAD_Stuffs.exe)/OOAD_Stuffs.exe

## Target: OOAD_Stuffs.exe
OBJS_OOAD_Stuffs.exe =  \
	$(TARGETDIR_OOAD_Stuffs.exe)/Benutzer.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Benutzerverwaltung.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Catering.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/CUI.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Einladung.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Equipment.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/main.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Meeting.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/MeetingVerwaltung.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Mitarbeiter.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Raum.o \
	$(TARGETDIR_OOAD_Stuffs.exe)/Raumverwaltung.o
USERLIBS_OOAD_Stuffs.exe = $(SYSLIBS_OOAD_Stuffs.exe) 
DEPLIBS_OOAD_Stuffs.exe =  
LDLIBS_OOAD_Stuffs.exe = $(USERLIBS_OOAD_Stuffs.exe)


# Link or archive
$(TARGETDIR_OOAD_Stuffs.exe)/OOAD_Stuffs.exe: $(TARGETDIR_OOAD_Stuffs.exe) $(OBJS_OOAD_Stuffs.exe) $(DEPLIBS_OOAD_Stuffs.exe)
	$(LINK.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ $(OBJS_OOAD_Stuffs.exe) $(LDLIBS_OOAD_Stuffs.exe)


# Compile source files into .o files
$(TARGETDIR_OOAD_Stuffs.exe)/Benutzer.o: $(TARGETDIR_OOAD_Stuffs.exe) Benutzer.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Benutzer.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Benutzerverwaltung.o: $(TARGETDIR_OOAD_Stuffs.exe) Benutzerverwaltung.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Benutzerverwaltung.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Catering.o: $(TARGETDIR_OOAD_Stuffs.exe) Catering.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Catering.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/CUI.o: $(TARGETDIR_OOAD_Stuffs.exe) CUI.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ CUI.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Einladung.o: $(TARGETDIR_OOAD_Stuffs.exe) Einladung.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Einladung.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Equipment.o: $(TARGETDIR_OOAD_Stuffs.exe) Equipment.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Equipment.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/main.o: $(TARGETDIR_OOAD_Stuffs.exe) main.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ main.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Meeting.o: $(TARGETDIR_OOAD_Stuffs.exe) Meeting.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Meeting.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/MeetingVerwaltung.o: $(TARGETDIR_OOAD_Stuffs.exe) MeetingVerwaltung.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ MeetingVerwaltung.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Mitarbeiter.o: $(TARGETDIR_OOAD_Stuffs.exe) Mitarbeiter.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Mitarbeiter.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Raum.o: $(TARGETDIR_OOAD_Stuffs.exe) Raum.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Raum.cpp

$(TARGETDIR_OOAD_Stuffs.exe)/Raumverwaltung.o: $(TARGETDIR_OOAD_Stuffs.exe) Raumverwaltung.cpp
	$(COMPILE.cc) $(CCFLAGS_OOAD_Stuffs.exe) $(CPPFLAGS_OOAD_Stuffs.exe) -o $@ Raumverwaltung.cpp



#### Clean target deletes all generated files ####
clean:
	rm -f \
		$(TARGETDIR_OOAD_Stuffs.exe)/OOAD_Stuffs.exe \
		$(TARGETDIR_OOAD_Stuffs.exe)/Benutzer.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Benutzerverwaltung.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Catering.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/CUI.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Einladung.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Equipment.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/main.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Meeting.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/MeetingVerwaltung.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Mitarbeiter.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Raum.o \
		$(TARGETDIR_OOAD_Stuffs.exe)/Raumverwaltung.o
	$(CCADMIN)
	rm -f -r $(TARGETDIR_OOAD_Stuffs.exe)


# Create the target directory (if needed)
$(TARGETDIR_OOAD_Stuffs.exe):
	mkdir -p $(TARGETDIR_OOAD_Stuffs.exe)


# Enable dependency checking
.KEEP_STATE:
.KEEP_STATE_FILE:.make.state.GNU-amd64-Windows

