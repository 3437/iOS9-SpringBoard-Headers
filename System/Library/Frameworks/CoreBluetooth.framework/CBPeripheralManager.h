/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:07 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/CBPairingAgentParentDelegate.h>
#import <libobjc.A.dylib/CBXpcConnectionDelegate.h>

@protocol CBPeripheralManagerDelegate;
@class CBXpcConnection, CBPairingAgent, NSMapTable, NSMutableArray, NSMutableDictionary, NSLock, NSString;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {

	struct {
		unsigned willRestoreState : 1;
		unsigned didAddService : 1;
		unsigned didReceiveReadRequest : 1;
		unsigned didReceiveWriteRequests : 1;
		unsigned centralDidSubscribeToCharacteristic : 1;
		unsigned centralDidUnsubscribeFromCharacteristic : 1;
		unsigned didStartAdvertising : 1;
		unsigned isReadyToUpdate : 1;
		unsigned centralDidConnect : 1;
		unsigned centralDidUpdateConnectionParameters : 1;
	}  _delegateFlags;
	CBXpcConnection* _connection;
	CBPairingAgent* _pairingAgent;
	NSMapTable* _centrals;
	NSMutableArray* _services;
	NSMutableDictionary* _characteristicIDs;
	NSLock* _updateLock;
	BOOL _readyForUpdates;
	BOOL _waitingForReady;
	BOOL _isAdvertising;
	id<CBPeripheralManagerDelegate> _delegate;
	long long _state;

}

@property (assign,nonatomic) id<CBPeripheralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (assign) BOOL isAdvertising;                                              //@synthesize isAdvertising=_isAdvertising - In the implementation block
@property (nonatomic,readonly) CBPairingAgent * sharedPairingAgent;                 //@synthesize pairingAgent=_pairingAgent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)authorizationStatus;
-(BOOL)isMsgAllowedWhenOff:(int)arg1 ;
-(BOOL)isMsgAllowedAlways:(int)arg1 ;
-(BOOL)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(void)handleStateUpdated:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(id)peerWithInfo:(id)arg1 ;
-(void)xpcConnectionDidReset;
-(void)xpcConnectionIsInvalid;
-(void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)xpcConnectionDidFinalize;
-(void)handleMTUChanged:(id)arg1 ;
-(id)centralWithInfo:(id)arg1 ;
-(void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4 ;
-(void)forEachCentral:(/*^block*/id)arg1 ;
-(void)respondToRequest:(id)arg1 withResult:(long long)arg2 ;
-(void)handleServiceAdded:(id)arg1 ;
-(void)handleGetAttributeValue:(id)arg1 ;
-(void)handleSetAttributeValues:(id)arg1 ;
-(void)handleNotificationAdded:(id)arg1 ;
-(void)handleNotificationRemoved:(id)arg1 ;
-(void)handleAdvertisingStarted:(id)arg1 ;
-(void)handleAdvertisingStopped:(id)arg1 ;
-(void)handleReadyForUpdates:(id)arg1 ;
-(void)handleSolicitedServicesFound:(id)arg1 ;
-(void)handleCentralMsg:(int)arg1 args:(id)arg2 ;
-(void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2 ;
-(void)startAdvertising:(id)arg1 ;
-(void)addService:(id)arg1 ;
-(void)removeAllServices;
-(BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3 ;
-(BOOL)isAdvertising;
-(void)setIsAdvertising:(BOOL)arg1 ;
-(void)setDelegate:(id<CBPeripheralManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id<CBPeripheralManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(CBPairingAgent *)sharedPairingAgent;
-(void)stopAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)removeService:(id)arg1 ;
@end
