/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:05:57 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Now Playing Module.bundle/Now Playing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Now Playing Module/Now Playing Module-Structs.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@class NSString, UIImage, MPArtworkCatalog, NSNumber, MPRequestResponseController, NSMutableDictionary, MPAVEndpointRoute;

@interface TVNPEndpointRouteConnection : NSObject <MPRequestResponseControllerDelegate> {

	BOOL _automaticResponseLoading;
	BOOL _wantsPlaybackMetadata;
	BOOL _attemptingConnection;
	float _rate;
	float _defaultPlaybackRate;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	UIImage* _artworkImage;
	MPArtworkCatalog* _artworkCatalog;
	NSNumber* _trackNumber;
	NSNumber* _totalNumberOfTracks;
	NSString* _contentItemIdentifier;
	long long _playbackState;
	double _duration;
	double _elapsedTime;
	double _lastUpdate;
	unsigned long long _connectionState;
	MPRequestResponseController* _requestController;
	NSMutableDictionary* _observerTokensToHandlers;
	CGSize _artworkSize;

}

@property (assign,getter=isAttemptingConnection,nonatomic) BOOL attemptingConnection;                          //@synthesize attemptingConnection=_attemptingConnection - In the implementation block
@property (assign,setter=_setWantsPlaybackMetadata:,nonatomic) BOOL _wantsPlaybackMetadata;                    //@synthesize wantsPlaybackMetadata=_wantsPlaybackMetadata - In the implementation block
@property (assign,setter=_setAutomaticResponseLoading:,nonatomic) BOOL _automaticResponseLoading;              //@synthesize automaticResponseLoading=_automaticResponseLoading - In the implementation block
@property (nonatomic,readonly) MPRequestResponseController * requestController;                                //@synthesize requestController=_requestController - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observerTokensToHandlers;                                 //@synthesize observerTokensToHandlers=_observerTokensToHandlers - In the implementation block
@property (nonatomic,retain) MPAVEndpointRoute * route; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * title;                                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * artist;                                                         //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy,readonly) NSString * album;                                                          //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) UIImage * artworkImage;                                                         //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,readonly) MPArtworkCatalog * artworkCatalog;                                              //@synthesize artworkCatalog=_artworkCatalog - In the implementation block
@property (assign,nonatomic) CGSize artworkSize;                                                               //@synthesize artworkSize=_artworkSize - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * trackNumber;                                                    //@synthesize trackNumber=_trackNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * totalNumberOfTracks;                                            //@synthesize totalNumberOfTracks=_totalNumberOfTracks - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentItemIdentifier;                                          //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) long long playbackState;                                                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) double duration;                                                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                                                             //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) float rate;                                                                     //@synthesize rate=_rate - In the implementation block
@property (nonatomic,readonly) float defaultPlaybackRate;                                                      //@synthesize defaultPlaybackRate=_defaultPlaybackRate - In the implementation block
@property (nonatomic,readonly) double lastUpdate;                                                              //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionState;                                             //@synthesize connectionState=_connectionState - In the implementation block
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingPaired;
-(NSString *)description;
-(id)response;
-(NSString *)bundleID;
-(NSString *)title;
-(double)duration;
-(void)_updateMetadata;
-(float)rate;
-(double)elapsedTime;
-(void)setRoute:(MPAVEndpointRoute *)arg1 ;
-(MPAVEndpointRoute *)route;
-(id)initWithRoute:(id)arg1 ;
-(NSString *)album;
-(NSString *)artist;
-(float)defaultPlaybackRate;
-(double)lastUpdate;
-(void)_updateState;
-(id)playerPath;
-(long long)playbackState;
-(unsigned long long)connectionState;
-(BOOL)isPaired;
-(NSNumber *)trackNumber;
-(MPArtworkCatalog *)artworkCatalog;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(MPRequestResponseController *)requestController;
-(NSString *)contentItemIdentifier;
-(UIImage *)artworkImage;
-(void)sendCommand:(unsigned)arg1 options:(id)arg2 ;
-(CGSize)artworkSize;
-(id)registerMetadataUpdateHandler:(/*^block*/id)arg1 ;
-(void)deregisterMetadataUpdateHandler:(id)arg1 ;
-(void)playPause;
-(void)connectAndPair;
-(NSNumber *)totalNumberOfTracks;
-(void)_createRequestController;
-(void)_reloadPlayerPathWithRoute:(id)arg1 ;
-(void)_connectPairingIfNeeded:(BOOL)arg1 ;
-(void)_setWantsPlaybackMetadata:(BOOL)arg1 ;
-(void)_updateAutomaticResponseLoading;
-(void)_connectionDidInvalidate:(id)arg1 ;
-(id)_preloadArtwork;
-(id)_placeholderArtwork;
-(void)setAttemptingConnection:(BOOL)arg1 ;
-(void)_setAutomaticResponseLoading:(BOOL)arg1 ;
-(BOOL)isAttemptingConnection;
-(BOOL)_automaticResponseLoading;
-(BOOL)_wantsPlaybackMetadata;
-(void)setArtworkSize:(CGSize)arg1 ;
-(NSMutableDictionary *)observerTokensToHandlers;
@end

