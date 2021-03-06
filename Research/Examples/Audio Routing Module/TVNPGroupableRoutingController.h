/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <Audio Routing Module/TVNPRoutingController.h>

@protocol OS_dispatch_queue;
@class TVNPRoutingDestination, NSArray, NSString, MPAVEndpointRoutingDataSource, MPAVOutputDeviceRoutingDataSource, MPAVRoutingController, NSMutableDictionary, NSObject;

@interface TVNPGroupableRoutingController : NSObject <MPAVRoutingControllerDelegate, TVNPRoutingController> {

	BOOL _allowsDestinationSelection;
	BOOL _allowsRetargeting;
	BOOL _needsAvailableRoutesUpdate;
	BOOL _multipleSelectionEnabled;
	NSArray* _availableDestinations;
	NSArray* _availableRoutes;
	TVNPRoutingDestination* _currentDestination;
	NSArray* _currentRoutes;
	unsigned long long _discoveryMode;
	NSString* _outputContextUID;
	MPAVEndpointRoutingDataSource* _endpointRoutingDataSource;
	MPAVOutputDeviceRoutingDataSource* _outputDeviceRoutingDataSource;
	MPAVRoutingController* _endpointRoutingController;
	MPAVRoutingController* _outputDeviceRoutingController;
	NSMutableDictionary* _outputDeviceIdentifiersToRoutes;
	NSMutableDictionary* _endpointIdentifiersToDestinations;
	NSArray* _allOutputDevices;
	NSArray* _allEndpoints;
	NSString* _currentEndpointRouteUID;
	NSObject*<OS_dispatch_queue> _updateQueue;
	unsigned long long _numberOfUpdates;

}

@property (nonatomic,readonly) MPAVEndpointRoutingDataSource * endpointRoutingDataSource;                      //@synthesize endpointRoutingDataSource=_endpointRoutingDataSource - In the implementation block
@property (nonatomic,readonly) MPAVOutputDeviceRoutingDataSource * outputDeviceRoutingDataSource;              //@synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * endpointRoutingController;                              //@synthesize endpointRoutingController=_endpointRoutingController - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * outputDeviceRoutingController;                          //@synthesize outputDeviceRoutingController=_outputDeviceRoutingController - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * outputDeviceIdentifiersToRoutes;                     //@synthesize outputDeviceIdentifiersToRoutes=_outputDeviceIdentifiersToRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * endpointIdentifiersToDestinations;                   //@synthesize endpointIdentifiersToDestinations=_endpointIdentifiersToDestinations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allOutputDevices;                                                //@synthesize allOutputDevices=_allOutputDevices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allEndpoints;                                                    //@synthesize allEndpoints=_allEndpoints - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentEndpointRouteUID;                                        //@synthesize currentEndpointRouteUID=_currentEndpointRouteUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> updateQueue;                                       //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfUpdates;                                             //@synthesize numberOfUpdates=_numberOfUpdates - In the implementation block
@property (nonatomic,readonly) BOOL needsAvailableRoutesUpdate;                                                //@synthesize needsAvailableRoutesUpdate=_needsAvailableRoutesUpdate - In the implementation block
@property (nonatomic,readonly) BOOL multipleSelectionEnabled;                                                  //@synthesize multipleSelectionEnabled=_multipleSelectionEnabled - In the implementation block
@property (nonatomic,copy) NSString * outputContextUID;                                                        //@synthesize outputContextUID=_outputContextUID - In the implementation block
@property (assign,nonatomic) BOOL allowsRetargeting;                                                           //@synthesize allowsRetargeting=_allowsRetargeting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long discoveryMode;                                                 //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,retain) TVNPRoutingDestination * currentDestination;                                      //@synthesize currentDestination=_currentDestination - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentRoutes;                                                   //@synthesize currentRoutes=_currentRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableDestinations;                                           //@synthesize availableDestinations=_availableDestinations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableRoutes;                                                 //@synthesize availableRoutes=_availableRoutes - In the implementation block
@property (nonatomic,readonly) BOOL allowsDestinationSelection;                                                //@synthesize allowsDestinationSelection=_allowsDestinationSelection - In the implementation block
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)init;
-(unsigned long long)discoveryMode;
-(void)setDiscoveryMode:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)updateQueue;
-(TVNPRoutingDestination *)currentDestination;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2 ;
-(NSArray *)availableRoutes;
-(void)_setNeedsDisplayedRoutesUpdate;
-(unsigned long long)numberOfUpdates;
-(BOOL)multipleSelectionEnabled;
-(id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(BOOL)arg2 initalFetchCompletion:(/*^block*/id)arg3 ;
-(void)setAllowsRetargeting:(BOOL)arg1 ;
-(BOOL)allowsDestinationSelection;
-(NSArray *)availableDestinations;
-(void)setCurrentDestination:(TVNPRoutingDestination *)arg1 ;
-(NSArray *)currentRoutes;
-(void)targetDestination:(id)arg1 ;
-(id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(BOOL)arg2 ;
-(void)_updateAvailableRoutes;
-(void)_updateWithAvailableEndpoints:(id)arg1 outputDevices:(id)arg2 ;
-(void)_updateAllowsDestinationSelection;
-(void)pickRoute:(id)arg1 forDestination:(id)arg2 ;
-(void)unpickRoute:(id)arg1 forDestination:(id)arg2 ;
-(void)setOutputContextUID:(NSString *)arg1 ;
-(NSString *)outputContextUID;
-(BOOL)allowsRetargeting;
-(MPAVEndpointRoutingDataSource *)endpointRoutingDataSource;
-(MPAVOutputDeviceRoutingDataSource *)outputDeviceRoutingDataSource;
-(MPAVRoutingController *)endpointRoutingController;
-(MPAVRoutingController *)outputDeviceRoutingController;
-(NSMutableDictionary *)outputDeviceIdentifiersToRoutes;
-(NSMutableDictionary *)endpointIdentifiersToDestinations;
-(NSArray *)allOutputDevices;
-(NSArray *)allEndpoints;
-(NSString *)currentEndpointRouteUID;
-(BOOL)needsAvailableRoutesUpdate;
@end

