/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, FBProcessDelegate;
@class NSObject, FBProcessState, NSString, FBWorkspace, NSHashTable, BSProcessDeathWatcher;

@interface FBProcess : NSObject <BSDescriptionProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	FBProcessState* _state;
	NSString* _name;
	NSString* _jobLabel;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	FBWorkspace* _workspace;
	NSHashTable* _observers;
	id<FBProcessDelegate> _delegate;
	int _pid;
	BOOL _running;
	BSProcessDeathWatcher* _processDeathObserver;
	BOOL _updatingState;

}

@property (nonatomic,copy,readonly) FBProcessState * state; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * jobLabel; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) int pid;                                                                               //@synthesize pid=_pid - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                                         //@synthesize running=_running - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground; 
@property (nonatomic,retain,readonly) FBWorkspace * workspace;                                                        //@synthesize workspace=_workspace - In the implementation block
@property (assign,getter=_queue_delegate,nonatomic) id<FBProcessDelegate> delegate; 
@property (assign,setter=_queue_setPid:,getter=_queue_pid,nonatomic) int queue_pid; 
@property (setter=_queue_setName:,getter=_queue_name,nonatomic,copy) NSString * queue_name; 
@property (setter=_queue_setJobLabel:,getter=_queue_jobLabel,nonatomic,copy) NSString * queue_jobLabel; 
@property (assign,setter=_queue_setRunning:,getter=_queue_isRunning,nonatomic) BOOL queue_running; 
@property (assign,setter=_queue_setTaskState:,getter=_queue_taskState,nonatomic) int queue_taskState; 
@property (assign,setter=_queue_setVisibility:,getter=_queue_visibility,nonatomic) int queue_visibility; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isApplicationProcess;
-(BOOL)isSystemApplicationProcess;
-(BOOL)isExtensionProcess;
-(void)setDelegate:(id<FBProcessDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(FBProcessState *)state;
-(NSString *)name;
-(id)_workspace;
-(void)addObserver:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isRunning;
-(id)_queue;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBWorkspace *)workspace;
-(int)_queue_pid;
-(void)_queue_setPid:(int)arg1 ;
-(id)_createWorkspace;
-(void)_queue_setName:(id)arg1 ;
-(id)_queue_name;
-(id)_queue_jobLabel;
-(void)_queue_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_updateStateWithBlock:(/*^block*/id)arg1 ;
-(void)_queue_toggleProcessDeathObserver:(BOOL)arg1 ;
-(void)_queue_setTaskState:(int)arg1 ;
-(void)_queue_setVisibility:(int)arg1 ;
-(int)_queue_effectiveVisibilityForVisibility:(int)arg1 ;
-(void)_queue_setRunning:(BOOL)arg1 ;
-(void)_queue_callExitObservers;
-(void)_queue_processDidExit;
-(id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(NSString *)jobLabel;
-(id)_queue_delegate;
-(BOOL)_queue_isRunning;
-(void)_queue_setJobLabel:(id)arg1 ;
-(BOOL)_queue_isForeground;
-(int)_queue_taskState;
-(id)_queue_newWatchdogForContext:(SCD_Struct_FB8)arg1 completion:(/*^block*/id)arg2 ;
-(int)_queue_visibility;
-(BOOL)isForeground;
-(int)pid;
@end

