/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:11 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class LSApplicationWorkspace, NSObject, NSHashTable, NSMutableDictionary, NSSet, NSMutableArray, NSString;

@interface FBApplicationLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {

	LSApplicationWorkspace* _applicationWorkspace;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observerQueue_observers;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _workQueue_installedApplicationsByBundleID;
	NSMutableDictionary* _workQueue_placeholdersByBundleID;
	BOOL _workQueue_usingNetwork;
	NSMutableDictionary* _workQueue_profilesBySignerIdentity;
	NSSet* _workQueue_managedApplicationBundleIDs;
	unsigned long long _workQueue_synchronizationActionCount;
	NSMutableArray* _workQueue_pendingSynchronizationExecutionBlocks;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSObject*<OS_dispatch_group> _preInstallGroup;
	BOOL _usingNetwork;

}

@property (getter=isUsingNetwork,nonatomic,readonly) BOOL usingNetwork;              //@synthesize usingNetwork=_usingNetwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setBundleExtendedInfoGenerationHandler:(/*^block*/id)arg1 ;
-(BOOL)isUsingNetwork;
-(id)_observers;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)allInstalledApplications;
-(id)installedApplicationWithBundleIdentifier:(id)arg1 ;
-(void)_managedAppsChangedNotification:(id)arg1 ;
-(void)_reloadProfiles;
-(void)_reloadManagedApplicationBundleIDs;
-(void)_sendToObservers:(id)arg1 didRemoveApplications:(id)arg2 ;
-(void)_workQueue_executeInstallSynchronizationBlocksIfAppropriate;
-(void)_dispatchToObservers:(id)arg1 synchronously:(BOOL)arg2 preBlock:(/*^block*/id)arg3 block:(/*^block*/id)arg4 ;
-(id)_workQueue_placeholdersForProxies:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 createdPlaceholders:(const id*)arg4 existingPlaceholders:(const id*)arg5 unmappedProxies:(const id*)arg6 ;
-(id)_workQueue_applicationsForProxies:(id)arg1 createIfNecessary:(BOOL)arg2 createdPlaceholders:(const id*)arg3 existingApplications:(const id*)arg4 unmappedProxies:(const id*)arg5 ;
-(void)_workQueue_updateProvisioningProfilesForAppInfo:(id)arg1 ;
-(void)_workQueue_updateManagedStatusForAppInfo:(id)arg1 ;
-(id)_workQueue_placeholderForProxy:(id)arg1 updateExistingIfNecessary:(BOOL)arg2 createIfNecessary:(BOOL)arg3 wasCreated:(BOOL*)arg4 ;
-(id)_workQueue_applicationInfoForProxy:(id)arg1 createIfNecessary:(BOOL)arg2 wasCreated:(BOOL*)arg3 ;
-(void)_workQueue_generateExtendedInfoForBundleInfo:(id)arg1 ;
-(void)_workQueue_removeInstalledApplicationsForProxiesIfNeeded:(id)arg1 removedApplications:(const id*)arg2 ;
-(void)_workQueue_notePlaceholdersModifiedSignificantly:(id)arg1 ;
-(void)_sendToObservers:(id)arg1 didAddPlaceholders:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didDemoteApplications:(id)arg2 ;
-(void)_workQueue_incrementSynchronizationActionCount;
-(BOOL)_workQueue_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didAddApplications:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 didReplaceApplications:(id)arg2 withApplications:(id)arg3 ;
-(void)_workQueue_decrementSynchronizationActionCount;
-(void)_sendToObservers:(id)arg1 didCancelPlaceholders:(id)arg2 ;
-(void)_sendToObservers:(id)arg1 networkUsageDidChange:(id)arg2 usingNetwork:(BOOL)arg3 ;
-(void)installedApplicationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)allPlaceholders;
-(id)placeholderWithBundleIdentifier:(id)arg1 ;
-(void)uninstallApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)executeOrPendInstallSynchronizationBlock:(/*^block*/id)arg1 ;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)networkUsageChanged:(BOOL)arg1 ;
-(void)_reload;
@end
