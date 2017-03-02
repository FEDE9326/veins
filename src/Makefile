#
# OMNeT++/OMNEST Makefile for libveins
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -O out --no-deep-includes -I/home/federico/Scaricati/veins-veins-4.4nuovo/src
#

# Name of target to be created (-o option)
TARGET = libveins$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc, .msg and .sm files
OBJS = \
    $O/veins/base/connectionManager/BaseConnectionManager.o \
    $O/veins/base/connectionManager/ChannelAccess.o \
    $O/veins/base/connectionManager/ConnectionManager.o \
    $O/veins/base/connectionManager/NicEntryDebug.o \
    $O/veins/base/connectionManager/NicEntryDirect.o \
    $O/veins/base/modules/BaseMacLayer.o \
    $O/veins/base/modules/BaseLayer.o \
    $O/veins/base/modules/BaseModule.o \
    $O/veins/base/modules/BaseApplLayer.o \
    $O/veins/base/modules/BaseBattery.o \
    $O/veins/base/modules/BatteryAccess.o \
    $O/veins/base/modules/BaseMobility.o \
    $O/veins/base/modules/BaseWorldUtility.o \
    $O/veins/base/phyLayer/MappingUtils.o \
    $O/veins/base/phyLayer/Decider.o \
    $O/veins/base/phyLayer/ChannelInfo.o \
    $O/veins/base/phyLayer/MappingBase.o \
    $O/veins/base/phyLayer/PhyUtils.o \
    $O/veins/base/phyLayer/ChannelState.o \
    $O/veins/base/phyLayer/Signal.o \
    $O/veins/base/phyLayer/BasePhyLayer.o \
    $O/veins/base/phyLayer/BaseDecider.o \
    $O/veins/base/utils/winsupport.o \
    $O/veins/base/utils/SimpleAddress.o \
    $O/veins/base/utils/NetwToMacControlInfo.o \
    $O/veins/base/utils/asserts.o \
    $O/veins/base/utils/Coord.o \
    $O/veins/modules/analogueModel/TwoRayInterferenceModel.o \
    $O/veins/modules/analogueModel/JakesFading.o \
    $O/veins/modules/analogueModel/PERModel.o \
    $O/veins/modules/analogueModel/NakagamiFading.o \
    $O/veins/modules/analogueModel/BreakpointPathlossModel.o \
    $O/veins/modules/analogueModel/SimplePathlossModel.o \
    $O/veins/modules/analogueModel/LogNormalShadowing.o \
    $O/veins/modules/analogueModel/SimpleObstacleShadowing.o \
    $O/veins/modules/application/data_structure/VehicleData.o \
    $O/veins/modules/application/data_structure/BlackList.o \
    $O/veins/modules/application/data_structure/CarInternalStorage.o \
    $O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o \
    $O/veins/modules/application/traci/TraCIDemoRSU11p.o \
    $O/veins/modules/application/traci/TraCIDemo11p.o \
    $O/veins/modules/application/traci/TraCITestApp.o \
    $O/veins/modules/mac/ieee80211p/Mac1609_4.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManager.o \
    $O/veins/modules/mobility/traci/TraCIConnection.o \
    $O/veins/modules/mobility/traci/TraCIMobility.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o \
    $O/veins/modules/mobility/traci/TraCIColor.o \
    $O/veins/modules/mobility/traci/TraCIScreenRecorder.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o \
    $O/veins/modules/mobility/traci/TraCICommandInterface.o \
    $O/veins/modules/mobility/traci/TraCIBuffer.o \
    $O/veins/modules/obstacle/ObstacleControl.o \
    $O/veins/modules/obstacle/Obstacle.o \
    $O/veins/modules/phy/PhyLayer80211p.o \
    $O/veins/modules/phy/SNRThresholdDecider.o \
    $O/veins/modules/phy/NistErrorRate.o \
    $O/veins/modules/phy/Decider80211p.o \
    $O/veins/modules/world/annotations/AnnotationDummy.o \
    $O/veins/modules/world/annotations/AnnotationManager.o \
    $O/veins/base/messages/BorderMsg_m.o \
    $O/veins/base/messages/MacPkt_m.o \
    $O/veins/base/messages/ChannelSenseRequest_m.o \
    $O/veins/base/messages/AirFrame_m.o \
    $O/veins/modules/messages/PhyControlMessage_m.o \
    $O/veins/modules/messages/WaveShortMessage_m.o \
    $O/veins/modules/messages/Mac80211Pkt_m.o \
    $O/veins/modules/messages/AirFrame11p_m.o

# Message files
MSGFILES = \
    veins/base/messages/BorderMsg.msg \
    veins/base/messages/MacPkt.msg \
    veins/base/messages/ChannelSenseRequest.msg \
    veins/base/messages/AirFrame.msg \
    veins/modules/messages/PhyControlMessage.msg \
    veins/modules/messages/WaveShortMessage.msg \
    veins/modules/messages/Mac80211Pkt.msg \
    veins/modules/messages/AirFrame11p.msg

# SM files
SMFILES =

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)
SMCOPTS =

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders smheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

%_sm.cc %_sm.h: %.sm
	$(qecho) SMC: $<
	$(Q)$(SMC) -c++ -suffix cc $(SMCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

smheaders: $(SMFILES:.sm=_sm.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f veins veins.exe libveins.so libveins.a libveins.dll libveins.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h ./*_sm.cc ./*_sm.h
	$(Q)-rm -f scripts/*_m.cc scripts/*_m.h scripts/*_sm.cc scripts/*_sm.h
	$(Q)-rm -f veins/*_m.cc veins/*_m.h veins/*_sm.cc veins/*_sm.h
	$(Q)-rm -f veins/base/*_m.cc veins/base/*_m.h veins/base/*_sm.cc veins/base/*_sm.h
	$(Q)-rm -f veins/base/connectionManager/*_m.cc veins/base/connectionManager/*_m.h veins/base/connectionManager/*_sm.cc veins/base/connectionManager/*_sm.h
	$(Q)-rm -f veins/base/messages/*_m.cc veins/base/messages/*_m.h veins/base/messages/*_sm.cc veins/base/messages/*_sm.h
	$(Q)-rm -f veins/base/modules/*_m.cc veins/base/modules/*_m.h veins/base/modules/*_sm.cc veins/base/modules/*_sm.h
	$(Q)-rm -f veins/base/phyLayer/*_m.cc veins/base/phyLayer/*_m.h veins/base/phyLayer/*_sm.cc veins/base/phyLayer/*_sm.h
	$(Q)-rm -f veins/base/utils/*_m.cc veins/base/utils/*_m.h veins/base/utils/*_sm.cc veins/base/utils/*_sm.h
	$(Q)-rm -f veins/modules/*_m.cc veins/modules/*_m.h veins/modules/*_sm.cc veins/modules/*_sm.h
	$(Q)-rm -f veins/modules/analogueModel/*_m.cc veins/modules/analogueModel/*_m.h veins/modules/analogueModel/*_sm.cc veins/modules/analogueModel/*_sm.h
	$(Q)-rm -f veins/modules/application/*_m.cc veins/modules/application/*_m.h veins/modules/application/*_sm.cc veins/modules/application/*_sm.h
	$(Q)-rm -f veins/modules/application/data_structure/*_m.cc veins/modules/application/data_structure/*_m.h veins/modules/application/data_structure/*_sm.cc veins/modules/application/data_structure/*_sm.h
	$(Q)-rm -f veins/modules/application/ieee80211p/*_m.cc veins/modules/application/ieee80211p/*_m.h veins/modules/application/ieee80211p/*_sm.cc veins/modules/application/ieee80211p/*_sm.h
	$(Q)-rm -f veins/modules/application/traci/*_m.cc veins/modules/application/traci/*_m.h veins/modules/application/traci/*_sm.cc veins/modules/application/traci/*_sm.h
	$(Q)-rm -f veins/modules/mac/*_m.cc veins/modules/mac/*_m.h veins/modules/mac/*_sm.cc veins/modules/mac/*_sm.h
	$(Q)-rm -f veins/modules/mac/ieee80211p/*_m.cc veins/modules/mac/ieee80211p/*_m.h veins/modules/mac/ieee80211p/*_sm.cc veins/modules/mac/ieee80211p/*_sm.h
	$(Q)-rm -f veins/modules/messages/*_m.cc veins/modules/messages/*_m.h veins/modules/messages/*_sm.cc veins/modules/messages/*_sm.h
	$(Q)-rm -f veins/modules/mobility/*_m.cc veins/modules/mobility/*_m.h veins/modules/mobility/*_sm.cc veins/modules/mobility/*_sm.h
	$(Q)-rm -f veins/modules/mobility/traci/*_m.cc veins/modules/mobility/traci/*_m.h veins/modules/mobility/traci/*_sm.cc veins/modules/mobility/traci/*_sm.h
	$(Q)-rm -f veins/modules/nic/*_m.cc veins/modules/nic/*_m.h veins/modules/nic/*_sm.cc veins/modules/nic/*_sm.h
	$(Q)-rm -f veins/modules/obstacle/*_m.cc veins/modules/obstacle/*_m.h veins/modules/obstacle/*_sm.cc veins/modules/obstacle/*_sm.h
	$(Q)-rm -f veins/modules/phy/*_m.cc veins/modules/phy/*_m.h veins/modules/phy/*_sm.cc veins/modules/phy/*_sm.h
	$(Q)-rm -f veins/modules/utility/*_m.cc veins/modules/utility/*_m.h veins/modules/utility/*_sm.cc veins/modules/utility/*_sm.h
	$(Q)-rm -f veins/modules/world/*_m.cc veins/modules/world/*_m.h veins/modules/world/*_sm.cc veins/modules/world/*_sm.h
	$(Q)-rm -f veins/modules/world/annotations/*_m.cc veins/modules/world/annotations/*_m.h veins/modules/world/annotations/*_sm.cc veins/modules/world/annotations/*_sm.h
	$(Q)-rm -f veins/nodes/*_m.cc veins/nodes/*_m.h veins/nodes/*_sm.cc veins/nodes/*_sm.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES) $(SM_CC_FILES)  ./*.cc scripts/*.cc veins/*.cc veins/base/*.cc veins/base/connectionManager/*.cc veins/base/messages/*.cc veins/base/modules/*.cc veins/base/phyLayer/*.cc veins/base/utils/*.cc veins/modules/*.cc veins/modules/analogueModel/*.cc veins/modules/application/*.cc veins/modules/application/data_structure/*.cc veins/modules/application/ieee80211p/*.cc veins/modules/application/traci/*.cc veins/modules/mac/*.cc veins/modules/mac/ieee80211p/*.cc veins/modules/messages/*.cc veins/modules/mobility/*.cc veins/modules/mobility/traci/*.cc veins/modules/nic/*.cc veins/modules/obstacle/*.cc veins/modules/phy/*.cc veins/modules/utility/*.cc veins/modules/world/*.cc veins/modules/world/annotations/*.cc veins/nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/veins/base/connectionManager/BaseConnectionManager.o: veins/base/connectionManager/BaseConnectionManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDebug.h \
	veins/base/connectionManager/NicEntryDirect.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/connectionManager/ChannelAccess.o: veins/base/connectionManager/ChannelAccess.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/connectionManager/ConnectionManager.o: veins/base/connectionManager/ConnectionManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/connectionManager/NicEntryDebug.o: veins/base/connectionManager/NicEntryDebug.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDebug.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/connectionManager/NicEntryDirect.o: veins/base/connectionManager/NicEntryDirect.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDirect.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/messages/AirFrame_m.o: veins/base/messages/AirFrame_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/messages/BorderMsg_m.o: veins/base/messages/BorderMsg_m.cc \
	veins/base/messages/BorderMsg_m.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/messages/ChannelSenseRequest_m.o: veins/base/messages/ChannelSenseRequest_m.cc \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/messages/MacPkt_m.o: veins/base/messages/MacPkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseApplLayer.o: veins/base/modules/BaseApplLayer.cc \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseBattery.o: veins/base/modules/BaseBattery.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseLayer.o: veins/base/modules/BaseLayer.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseMacLayer.o: veins/base/modules/BaseMacLayer.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/modules/AddressingInterface.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMacLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MacToNetwControlInfo.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseMobility.o: veins/base/modules/BaseMobility.cc \
	veins/base/messages/BorderMsg_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseModule.o: veins/base/modules/BaseModule.cc \
	veins/base/modules/BaseModule.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseWorldUtility.o: veins/base/modules/BaseWorldUtility.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BatteryAccess.o: veins/base/modules/BatteryAccess.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/BaseDecider.o: veins/base/phyLayer/BaseDecider.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/BasePhyLayer.o: veins/base/phyLayer/BasePhyLayer.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyToMacControlInfo.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/ChannelInfo.o: veins/base/phyLayer/ChannelInfo.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/ChannelState.o: veins/base/phyLayer/ChannelState.cc \
	veins/base/phyLayer/ChannelState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/Decider.o: veins/base/phyLayer/Decider.cc \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/MappingBase.o: veins/base/phyLayer/MappingBase.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/MappingUtils.o: veins/base/phyLayer/MappingUtils.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/PhyUtils.o: veins/base/phyLayer/PhyUtils.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/Signal.o: veins/base/phyLayer/Signal.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/Coord.o: veins/base/utils/Coord.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/NetwToMacControlInfo.o: veins/base/utils/NetwToMacControlInfo.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/SimpleAddress.o: veins/base/utils/SimpleAddress.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/asserts.o: veins/base/utils/asserts.cc \
	veins/base/utils/asserts.h
$O/veins/base/utils/winsupport.o: veins/base/utils/winsupport.cc \
	veins/base/utils/winsupport.h
$O/veins/modules/analogueModel/BreakpointPathlossModel.o: veins/modules/analogueModel/BreakpointPathlossModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/BreakpointPathlossModel.h
$O/veins/modules/analogueModel/JakesFading.o: veins/modules/analogueModel/JakesFading.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/JakesFading.h
$O/veins/modules/analogueModel/LogNormalShadowing.o: veins/modules/analogueModel/LogNormalShadowing.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/LogNormalShadowing.h
$O/veins/modules/analogueModel/NakagamiFading.o: veins/modules/analogueModel/NakagamiFading.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/NakagamiFading.h
$O/veins/modules/analogueModel/PERModel.o: veins/modules/analogueModel/PERModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/PERModel.h
$O/veins/modules/analogueModel/SimpleObstacleShadowing.o: veins/modules/analogueModel/SimpleObstacleShadowing.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/SimpleObstacleShadowing.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/analogueModel/SimplePathlossModel.o: veins/modules/analogueModel/SimplePathlossModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/SimplePathlossModel.h
$O/veins/modules/analogueModel/TwoRayInterferenceModel.o: veins/modules/analogueModel/TwoRayInterferenceModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/TwoRayInterferenceModel.h
$O/veins/modules/application/data_structure/BlackList.o: veins/modules/application/data_structure/BlackList.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/BlackList.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/application/data_structure/CarInternalStorage.o: veins/modules/application/data_structure/CarInternalStorage.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h
$O/veins/modules/application/data_structure/VehicleData.o: veins/modules/application/data_structure/VehicleData.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/VehicleData.h
$O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o: veins/modules/application/ieee80211p/BaseWaveApplLayer.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/utility/Consts80211p.h
$O/veins/modules/application/traci/TraCIDemo11p.o: veins/modules/application/traci/TraCIDemo11p.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/application/traci/TraCIDemo11p.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/application/traci/TraCIDemoRSU11p.o: veins/modules/application/traci/TraCIDemoRSU11p.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/BlackList.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/application/traci/TraCIDemoRSU11p.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/application/traci/TraCITestApp.o: veins/modules/application/traci/TraCITestApp.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/asserts.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/application/traci/TraCITestApp.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/mac/ieee80211p/Mac1609_4.o: veins/modules/mac/ieee80211p/Mac1609_4.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMacLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyToMacControlInfo.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/JakesFading.h \
	veins/modules/analogueModel/LogNormalShadowing.h \
	veins/modules/analogueModel/SimplePathlossModel.h \
	veins/modules/mac/ieee80211p/Mac1609_4.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/Mac80211Pkt_m.h \
	veins/modules/messages/PhyControlMessage_m.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/DeciderResult80211.h \
	veins/modules/phy/PhyLayer80211p.h \
	veins/modules/phy/SNRThresholdDecider.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/utility/ConstsPhy.h
$O/veins/modules/messages/AirFrame11p_m.o: veins/modules/messages/AirFrame11p_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/AirFrame11p_m.h
$O/veins/modules/messages/Mac80211Pkt_m.o: veins/modules/messages/Mac80211Pkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/Mac80211Pkt_m.h
$O/veins/modules/messages/PhyControlMessage_m.o: veins/modules/messages/PhyControlMessage_m.cc \
	veins/modules/messages/PhyControlMessage_m.h
$O/veins/modules/messages/WaveShortMessage_m.o: veins/modules/messages/WaveShortMessage_m.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/WaveShortMessage_m.h
$O/veins/modules/mobility/traci/TraCIBuffer.o: veins/modules/mobility/traci/TraCIBuffer.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h
$O/veins/modules/mobility/traci/TraCIColor.o: veins/modules/mobility/traci/TraCIColor.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIColor.h
$O/veins/modules/mobility/traci/TraCICommandInterface.o: veins/modules/mobility/traci/TraCICommandInterface.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h
$O/veins/modules/mobility/traci/TraCIConnection.o: veins/modules/mobility/traci/TraCIConnection.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h
$O/veins/modules/mobility/traci/TraCIMobility.o: veins/modules/mobility/traci/TraCIMobility.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/mobility/traci/TraCIScenarioManager.o: veins/modules/mobility/traci/TraCIScenarioManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScenarioManagerInet.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o: veins/modules/mobility/traci/TraCIScenarioManagerInet.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o: veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/mobility/traci/TraCIScreenRecorder.o: veins/modules/mobility/traci/TraCIScreenRecorder.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScreenRecorder.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/obstacle/Obstacle.o: veins/modules/obstacle/Obstacle.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/obstacle/ObstacleControl.o: veins/modules/obstacle/ObstacleControl.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/phy/Decider80211p.o: veins/modules/phy/Decider80211p.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/messages/AirFrame11p_m.h \
	veins/modules/messages/Mac80211Pkt_m.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/DeciderResult80211.h \
	veins/modules/phy/NistErrorRate.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/utility/ConstsPhy.h
$O/veins/modules/phy/NistErrorRate.o: veins/modules/phy/NistErrorRate.cc \
	veins/modules/phy/NistErrorRate.h \
	veins/modules/utility/ConstsPhy.h
$O/veins/modules/phy/PhyLayer80211p.o: veins/modules/phy/PhyLayer80211p.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/BreakpointPathlossModel.h \
	veins/modules/analogueModel/JakesFading.h \
	veins/modules/analogueModel/LogNormalShadowing.h \
	veins/modules/analogueModel/NakagamiFading.h \
	veins/modules/analogueModel/PERModel.h \
	veins/modules/analogueModel/SimpleObstacleShadowing.h \
	veins/modules/analogueModel/SimplePathlossModel.h \
	veins/modules/analogueModel/TwoRayInterferenceModel.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/messages/AirFrame11p_m.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/PhyLayer80211p.h \
	veins/modules/phy/SNRThresholdDecider.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h
$O/veins/modules/phy/SNRThresholdDecider.o: veins/modules/phy/SNRThresholdDecider.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/phy/SNRThresholdDecider.h
$O/veins/modules/world/annotations/AnnotationDummy.o: veins/modules/world/annotations/AnnotationDummy.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/world/annotations/AnnotationDummy.h
$O/veins/modules/world/annotations/AnnotationManager.o: veins/modules/world/annotations/AnnotationManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/data_structure/CarInternalStorage.h \
	veins/modules/application/data_structure/VehicleData.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h

