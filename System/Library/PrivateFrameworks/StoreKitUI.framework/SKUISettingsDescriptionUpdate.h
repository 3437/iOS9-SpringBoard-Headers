/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject {

	NSArray* _indexPaths;
	NSIndexSet* _indexSet;
	long long _updateType;

}

@property (nonatomic,retain) NSArray * indexPaths;                //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,retain) NSIndexSet * indexSet;               //@synthesize indexSet=_indexSet - In the implementation block
@property (nonatomic,readonly) long long updateType;              //@synthesize updateType=_updateType - In the implementation block
-(NSIndexSet *)indexSet;
-(long long)updateType;
-(id)initWithUpdateType:(long long)arg1 ;
-(void)setIndexPaths:(NSArray *)arg1 ;
-(NSArray *)indexPaths;
-(void)setIndexSet:(NSIndexSet *)arg1 ;
@end
