/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SWCXPCServer.h>

@protocol OS_dispatch_source;
@class NSMutableArray, NSXPCListener, NSObject, NSString;

@interface SWCManager : NSObject <NSXPCListenerDelegate, SWCXPCServer> {

	NSMutableArray* _database;
	NSXPCListener* _xpcListener;
	NSMutableArray* _netRequests;
	NSObject*<OS_dispatch_source> _retryTimer;
	NSObject*<OS_dispatch_source> _recheckTimer;
	NSMutableArray* _xpcRequests;
	BOOL _started;
	BOOL _addedAllApps;
	BOOL _allowUnsigned;
	BOOL _redirects;
	BOOL _verifyEV;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_scheduleRetries;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(void)removeBundleID:(id)arg1 ;
-(void)logControl:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 details:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)addService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)show:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removeService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)addAllAppsWithReply:(/*^block*/id)arg1 ;
-(void)checkService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)getInfoForService:(id)arg1 app:(id)arg2 domain:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setService:(id)arg1 app:(id)arg2 domain:(id)arg3 mask:(unsigned)arg4 flags:(unsigned)arg5 reply:(/*^block*/id)arg6 ;
-(void)_sanitizeDatabase;
-(int)_addService:(id)arg1 app:(id)arg2 domain:(id)arg3 ;
-(void)_schedulePeriodicRechecks;
-(id)_appEntitlementsByID:(id)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(id)_installedAppByID:(id)arg1 ;
-(void)_completeAppsRequestForURLConnection:(id)arg1 status:(int)arg2 services:(id)arg3 ;
-(int)_verifyTrust:(SecTrustRef)arg1 ;
-(void)addBundleID:(id)arg1 ;
-(void)_reorderAppLinks:(id)arg1 domain:(id)arg2 ;
-(void)addBundleID:(id)arg1 preApproved:(BOOL)arg2 ;
-(int)_saveDatabase;
-(int)_ensureDatabaseLoaded;
-(int)_startAppsRequestForDomain:(id)arg1 ;
-(id)_findAppRequestForURLConnection:(id)arg1 ;
-(id)_findService:(id)arg1 app:(id)arg2 domain:(id)arg3 ;
-(void)addAllApps;
-(void)_parseServiceDomainString:(id)arg1 legacy:(BOOL)arg2 service:(id*)arg3 domain:(id*)arg4 ;
-(void)_retryDownloads;
-(void)addAllAppleApps;
-(void)_performPeriodicRechecks;
@end
