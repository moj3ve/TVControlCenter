/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 10, 2019 at 4:04:05 AM Mountain Standard Time
* Operating System: Version 13.2 (Build 17K82)
* Image Source: /System/Library/TVSystemMenuModules/Audio Routing Module.bundle/Audio Routing Module
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface TVNPRoutingTintedImageCache : NSObject {

	NSCache* _imageCache;

}

@property (nonatomic,readonly) NSCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSCache *)imageCache;
-(id)tintedImageWithName:(id)arg1 tintColor:(id)arg2 ;
@end

