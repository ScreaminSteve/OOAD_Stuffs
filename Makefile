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

=======
#
#  There exist several targets which are by default empty and which can be 
#  used for execution of your targets. These targets are usually executed 
#  before and after some main targets. They are: 
#
#     .build-pre:              called before 'build' target
#     .build-post:             called after 'build' target
#     .clean-pre:              called before 'clean' target
#     .clean-post:             called after 'clean' target
#     .clobber-pre:            called before 'clobber' target
#     .clobber-post:           called after 'clobber' target
#     .all-pre:                called before 'all' target
#     .all-post:               called after 'all' target
#     .help-pre:               called before 'help' target
#     .help-post:              called after 'help' target
#
#  Targets beginning with '.' are not intended to be called on their own.
#
#  Main targets can be executed directly, and they are:
#  
#     build                    build a specific configuration
#     clean                    remove built files from a configuration
#     clobber                  remove all built files
#     all                      build all configurations
#     help                     print help mesage
#  
#  Targets .build-impl, .clean-impl, .clobber-impl, .all-impl, and
#  .help-impl are implemented in nbproject/makefile-impl.mk.
#
#  Available make variables:
#
#     CND_BASEDIR                base directory for relative paths
#     CND_DISTDIR                default top distribution directory (build artifacts)
#     CND_BUILDDIR               default top build directory (object files, ...)
#     CONF                       name of current configuration
#     CND_PLATFORM_${CONF}       platform name (current configuration)
#     CND_ARTIFACT_DIR_${CONF}   directory of build artifact (current configuration)
#     CND_ARTIFACT_NAME_${CONF}  name of build artifact (current configuration)
#     CND_ARTIFACT_PATH_${CONF}  path to build artifact (current configuration)
#     CND_PACKAGE_DIR_${CONF}    directory of package (current configuration)
#     CND_PACKAGE_NAME_${CONF}   name of package (current configuration)
#     CND_PACKAGE_PATH_${CONF}   path to package (current configuration)
#
# NOCDDL


# Environment 
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin


# build
build: .build-post

.build-pre:
# Add your pre 'build' code here...

.build-post: .build-impl
# Add your post 'build' code here...


# clean
clean: .clean-post

.clean-pre:
# Add your pre 'clean' code here...

.clean-post: .clean-impl
# Add your post 'clean' code here...


# clobber
clobber: .clobber-post

.clobber-pre:
# Add your pre 'clobber' code here...

.clobber-post: .clobber-impl
# Add your post 'clobber' code here...


# all
all: .all-post

.all-pre:
# Add your pre 'all' code here...

.all-post: .all-impl
# Add your post 'all' code here...


# build tests
build-tests: .build-tests-post

.build-tests-pre:
# Add your pre 'build-tests' code here...

.build-tests-post: .build-tests-impl
# Add your post 'build-tests' code here...


# run tests
test: .test-post

.test-pre: build-tests
# Add your pre 'test' code here...

.test-post: .test-impl
# Add your post 'test' code here...


# help
help: .help-post

.help-pre:
# Add your pre 'help' code here...

.help-post: .help-impl
# Add your post 'help' code here...



# include project implementation makefile
include nbproject/Makefile-impl.mk

# include project make variables
include nbproject/Makefile-variables.mk
>>>>>>> Hendrik
