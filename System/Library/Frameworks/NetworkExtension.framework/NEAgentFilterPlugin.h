/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEAgentSessionDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NEAgentSession, NSString, NSUUID, NEPluginPreferences;

@interface NEAgentFilterPlugin : NSObject <NEAgentSessionDelegate> {

	CFBundleRef _pluginBundle;
	CFDictionaryRef _pendingGlobalPersistentData;
	CFDictionaryRef _pendingPerConfigurationPersistentData;
	NESocketContentFilter_sRef _socketContentFilter;
	NEAgentFilterPluginCallbacks* _pluginCallbacks;
	void* _pluginInfo;
	/*^block*/id _browserNewFlowHandler;
	/*^block*/id _browserDataHandler;
	/*^block*/id _browserDataCompleteHandler;
	NSObject*<OS_dispatch_queue> _clientQueue;
	void* _clientInfo;
	CFDictionaryRef _browserFlows;
	BOOL _pluginInitialized;
	BOOL _builtInPlugin;
	int _outstandingSetGlobalDataOps;
	int _outstandingSetDataOps;
	NEAgentSession* _session;
	NSString* _pluginType;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _configID;
	NEPluginPreferences* _pluginPrefs;
	NSObject*<OS_xpc_object> _clientListener;

}

@property (__weak,readonly) NEAgentSession * session;                    //@synthesize session=_session - In the implementation block
@property (readonly) NSString * pluginType;                              //@synthesize pluginType=_pluginType - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL pluginInitialized;                               //@synthesize pluginInitialized=_pluginInitialized - In the implementation block
@property (retain) NSUUID * configID;                                    //@synthesize configID=_configID - In the implementation block
@property (retain) NEPluginPreferences * pluginPrefs;                    //@synthesize pluginPrefs=_pluginPrefs - In the implementation block
@property (retain) NSObject*<OS_xpc_object> clientListener;              //@synthesize clientListener=_clientListener - In the implementation block
@property (assign) int outstandingSetGlobalDataOps;                      //@synthesize outstandingSetGlobalDataOps=_outstandingSetGlobalDataOps - In the implementation block
@property (assign) int outstandingSetDataOps;                            //@synthesize outstandingSetDataOps=_outstandingSetDataOps - In the implementation block
@property (readonly) BOOL builtInPlugin;                                 //@synthesize builtInPlugin=_builtInPlugin - In the implementation block
-(NSString *)pluginType;
-(BOOL)pluginInitialized;
-(void)setPluginInitialized:(BOOL)arg1 ;
-(void)handleInitMessage:(id)arg1 ;
-(void)handleStart:(id)arg1 ;
-(void)handleStop:(id)arg1 ;
-(void)handleEnvironmentEvent:(id)arg1 ;
-(void)handleAddClientMessage:(id)arg1 ;
-(void)closeBrowserFilterFlow:(NEContentFilterFlow_sRef)arg1 forUUID:(CFUUIDRef)arg2 ;
-(void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleClientMessage:(id)arg1 forConnection:(id)arg2 ;
-(NSObject*<OS_xpc_object>)clientListener;
-(void)setClientListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)acceptNewClientConnection:(id)arg1 ;
-(void)setConfigID:(NSUUID *)arg1 ;
-(void)setPluginPrefs:(NEPluginPreferences *)arg1 ;
-(void)sendStatus:(long long)arg1 withError:(long long)arg2 ;
-(void)sendEnvironmentEventComplete:(long long)arg1 ;
-(int)outstandingSetGlobalDataOps;
-(void)setOutstandingSetGlobalDataOps:(int)arg1 ;
-(int)outstandingSetDataOps;
-(void)setOutstandingSetDataOps:(int)arg1 ;
-(NEPluginPreferences *)pluginPrefs;
-(NSUUID *)configID;
-(id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(CFBundleRef)arg4 ;
-(void)handleInitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleDisposeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handleMessage:(id)arg1 withOuterMessage:(id)arg2 ;
-(void)handleCancel;
-(void)sendBrowserContentFilterServerRequest;
-(BOOL)sendSocketContentFilterRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)sendSetPersistentData:(CFDictionaryRef)arg1 ofType:(long long)arg2 ;
-(CFDictionaryRef)copyPersistentDataOfType:(long long)arg1 ;
-(NESocketContentFilter_sRef)copySocketContentFilter;
-(void)setBrowserNewFlowHandler:(/*^block*/id)arg1 dataHandler:(/*^block*/id)arg2 dataCompleteHandler:(/*^block*/id)arg3 clientQueue:(id)arg4 andClientInfo:(void*)arg5 ;
-(BOOL)builtInPlugin;
-(NEAgentSession *)session;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cleanup;
@end
