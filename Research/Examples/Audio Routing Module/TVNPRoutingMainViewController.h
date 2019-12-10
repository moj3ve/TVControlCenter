/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <Audio Routing Module/TVNPRoutingDestinationsCollectionViewControllerDelegate.h>
#import <Audio Routing Module/TVNPRoutingRoutesCollectionViewControllerDelegate.h>

@protocol TVNPRoutingMainViewControllerDelegate, TVNPRoutingController;
@class PBSAssertion, MPRouteLabel, UILabel, TVNPRoutingDestinationsCollectionViewController, TVNPRoutingRoutesCollectionViewController, NSObject, NSString;

@interface TVNPRoutingMainViewController : UIViewController <TVNPRoutingDestinationsCollectionViewControllerDelegate, TVNPRoutingRoutesCollectionViewControllerDelegate> {

	BOOL _editingVolume;
	id<TVNPRoutingMainViewControllerDelegate> _delegate;
	PBSAssertion* _playPauseAssertion;
	MPRouteLabel* _titleView;
	UILabel* _hintView;
	TVNPRoutingDestinationsCollectionViewController* _destinationsCollectionViewController;
	TVNPRoutingRoutesCollectionViewController* _routesCollectionViewController;
	NSObject*<TVNPRoutingController> _routingController;

}

@property (nonatomic,readonly) BOOL editingVolume;                                                                                  //@synthesize editingVolume=_editingVolume - In the implementation block
@property (nonatomic,readonly) PBSAssertion * playPauseAssertion;                                                                   //@synthesize playPauseAssertion=_playPauseAssertion - In the implementation block
@property (nonatomic,readonly) MPRouteLabel * titleView;                                                                            //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) UILabel * hintView;                                                                                  //@synthesize hintView=_hintView - In the implementation block
@property (nonatomic,readonly) TVNPRoutingDestinationsCollectionViewController * destinationsCollectionViewController;              //@synthesize destinationsCollectionViewController=_destinationsCollectionViewController - In the implementation block
@property (nonatomic,readonly) TVNPRoutingRoutesCollectionViewController * routesCollectionViewController;                          //@synthesize routesCollectionViewController=_routesCollectionViewController - In the implementation block
@property (nonatomic,readonly) NSObject*<TVNPRoutingController> routingController;                                                  //@synthesize routingController=_routingController - In the implementation block
@property (assign,nonatomic,__weak) id<TVNPRoutingMainViewControllerDelegate> delegate;                                             //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_destinationLayout;
+(id)_routesLayout;
-(void)dealloc;
-(id<TVNPRoutingMainViewControllerDelegate>)delegate;
-(void)setDelegate:(id<TVNPRoutingMainViewControllerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(MPRouteLabel *)titleView;
-(NSObject*<TVNPRoutingController>)routingController;
-(void)_updateTitleView;
-(PBSAssertion *)playPauseAssertion;
-(id)initWithRoutingController:(id)arg1 options:(id)arg2 ;
-(void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)didPressMenu:(id)arg1 ;
-(void)didPressPlayPause:(id)arg1 ;
-(void)_updateHintText;
-(void)routingViewControllerWillBeginEditingVolume:(id)arg1 ;
-(void)routingViewControllerWillEndEditingVolume:(id)arg1 ;
-(BOOL)editingVolume;
-(UILabel *)hintView;
-(TVNPRoutingDestinationsCollectionViewController *)destinationsCollectionViewController;
-(TVNPRoutingRoutesCollectionViewController *)routesCollectionViewController;
@end
