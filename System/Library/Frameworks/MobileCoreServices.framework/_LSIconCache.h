/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _LSIconCache : NSObject {

	BOOL _initialized;

}

@property (readonly) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
+(id)dataWithResourcePath:(id)arg1 ;
+(id)sharedinstance;
-(id)iconDataForKey:(id)arg1 generatorBlock:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)initialized;
-(BOOL)isInitialized;
@end

