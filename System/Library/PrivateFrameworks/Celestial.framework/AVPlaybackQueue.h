/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:38 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject {

	id _delegate;
	AVQueue* _avItemQueue;
	NSMutableArray* _pbItemQueue;
	OpaqueFigPlayerRef _figPlayer;
	int _ignoreAVQueueModifications;
	BOOL _hasBuiltPlaybackQueue;
	BOOL _waitingToAddFirstItem;
	int _avQueueTransactionCount;
	long long _repeatMode;

}
-(void)setRepeatMode:(long long)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)beginAVQueueTransaction;
-(void)endAVQueueTransaction;
-(id)initWithDelegate:(id)arg1 figPlayer:(OpaqueFigPlayerRef)arg2 ;
-(void)setAVItemQueue:(id)arg1 ;
-(void)ensurePlaybackQueue;
-(void)ensurePlaybackQueueImmed;
-(id)currentPlaybackItem;
-(void)playbackItemWasRemovedFromPlayQueue:(id)arg1 ;
-(void)updateBookmarkTimesIncludeFirst:(BOOL)arg1 updateFirst:(BOOL)arg2 ;
-(void)playbackItemInspectionComplete:(id)arg1 ;
-(void)checkQueueConsistency;
-(void)scheduleRemoveItemsNoLongerInPlayQueue;
-(void)clearPBItemQueueFromIndex:(int)arg1 ;
-(void)queueItemWasAddedNotification:(id)arg1 ;
-(void)queueItemWillBeRemovedNotification:(id)arg1 ;
-(void)fillInPBItemQueue;
-(void)removeItemsNoLongerInPlayQueue;
@end
