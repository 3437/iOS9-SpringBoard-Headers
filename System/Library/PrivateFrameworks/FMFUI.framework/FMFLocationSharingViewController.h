/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <FMFUI/FMFSessionDelegateInternal.h>

@class NSArray, NSMutableDictionary, FMFHandle, UIAlertController, NSString;

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal> {

	BOOL _isMyLocationEnabled;
	BOOL _useFamilyCirclePhotos;
	BOOL _useFamilyCirclePhotosLoaded;
	NSArray* _allFollowersHandles;
	NSArray* _followersHandles;
	NSArray* _followersSpecifiers;
	NSArray* _familySpecifiers;
	NSMutableDictionary* _dsidToFamilyPhoto;
	NSArray* _hashedFamilyDsids;
	void* _addressBook;
	FMFHandle* _lastSelectedHandle;
	NSArray* _familyMembers;
	UIAlertController* _genericErrorAlert;

}

@property (nonatomic,retain) NSArray * allFollowersHandles;                        //@synthesize allFollowersHandles=_allFollowersHandles - In the implementation block
@property (nonatomic,retain) NSArray * followersHandles;                           //@synthesize followersHandles=_followersHandles - In the implementation block
@property (nonatomic,retain) NSArray * followersSpecifiers;                        //@synthesize followersSpecifiers=_followersSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * familySpecifiers;                           //@synthesize familySpecifiers=_familySpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dsidToFamilyPhoto;              //@synthesize dsidToFamilyPhoto=_dsidToFamilyPhoto - In the implementation block
@property (nonatomic,retain) NSArray * hashedFamilyDsids;                          //@synthesize hashedFamilyDsids=_hashedFamilyDsids - In the implementation block
@property (assign,nonatomic) void* addressBook;                                    //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) FMFHandle * lastSelectedHandle;                       //@synthesize lastSelectedHandle=_lastSelectedHandle - In the implementation block
@property (assign,nonatomic) BOOL isMyLocationEnabled;                             //@synthesize isMyLocationEnabled=_isMyLocationEnabled - In the implementation block
@property (nonatomic,retain) NSArray * familyMembers;                              //@synthesize familyMembers=_familyMembers - In the implementation block
@property (nonatomic,retain) UIAlertController * genericErrorAlert;                //@synthesize genericErrorAlert=_genericErrorAlert - In the implementation block
@property (assign,nonatomic) BOOL useFamilyCirclePhotos;                           //@synthesize useFamilyCirclePhotos=_useFamilyCirclePhotos - In the implementation block
@property (assign,nonatomic) BOOL useFamilyCirclePhotosLoaded;                     //@synthesize useFamilyCirclePhotosLoaded=_useFamilyCirclePhotosLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)setAddressBook:(void*)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setDsidToFamilyPhoto:(NSMutableDictionary *)arg1 ;
-(BOOL)isMyLocationEnabled;
-(void)reloadSpecifiersOnMainQueue;
-(void)_loadFamilyMembers:(BOOL)arg1 ;
-(void)abChanged:(id)arg1 ;
-(void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_shareSwitchEnabled:(id)arg1 ;
-(void)_meDeviceSpecifierWasTapped:(id)arg1 ;
-(id)_specifierForFamilyMember:(id)arg1 ;
-(void)setFamilySpecifiers:(NSArray *)arg1 ;
-(id)sortedFollowersWithCombinedRecords:(id)arg1 ;
-(void)setAllFollowersHandles:(NSArray *)arg1 ;
-(NSArray *)allFollowersHandles;
-(NSArray *)hashedFamilyDsids;
-(id)_specifierForHandle:(id)arg1 ;
-(void)setFollowersSpecifiers:(NSArray *)arg1 ;
-(void)setFollowersHandles:(NSArray *)arg1 ;
-(NSArray *)followersSpecifiers;
-(void)setHashedFamilyDsids:(NSArray *)arg1 ;
-(BOOL)useFamilyCirclePhotos;
-(void)_loadFamilyMemberPhotos;
-(NSMutableDictionary *)dsidToFamilyPhoto;
-(void*)recordForHandle:(id)arg1 ;
-(id)monogramForHandle:(id)arg1 ;
-(void)_showHandleDetails:(id)arg1 ;
-(id)offerTimeRemaining:(double)arg1 ;
-(void)_showFamilyMemberDetails:(id)arg1 ;
-(BOOL)_isFamilyMemberAFollower:(id)arg1 ;
-(id)formatStringForHours:(long long)arg1 minutes:(long long)arg2 ;
-(void)displayGenericErrorAlert;
-(UIAlertController *)genericErrorAlert;
-(void)setGenericErrorAlert:(UIAlertController *)arg1 ;
-(NSArray *)followersHandles;
-(void)setLastSelectedHandle:(FMFHandle *)arg1 ;
-(void)_pushAddressBookUIForHandle:(id)arg1 ;
-(NSArray *)familySpecifiers;
-(BOOL)_isHandleAFollower:(id)arg1 ;
-(id)allHandlesMatchingABCardForSelectedHandle:(id)arg1 ;
-(int)identifierOfProperty:(int)arg1 withHandleId:(id)arg2 forRecord:(void*)arg3 ;
-(void)addRemoveActionToPersonViewController:(id)arg1 ;
-(void)addShareActionToPersonViewController:(id)arg1 ;
-(void*)unknownRecordForData:(id)arg1 property:(int)arg2 ;
-(BOOL)phoneNumberMatches:(id)arg1 phone2:(id)arg2 ;
-(id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2 ;
-(id)reverseString:(id)arg1 ;
-(void)removeFollower:(id)arg1 ;
-(void)shareMyLocation:(id)arg1 ;
-(FMFHandle *)lastSelectedHandle;
-(id)_followerHandleWithHashedDSID:(id)arg1 ;
-(void)networkReachabilityUpdated:(BOOL)arg1 ;
-(BOOL)noMeDeviceSelected:(id)arg1 ;
-(void)setIsMyLocationEnabled:(BOOL)arg1 ;
-(void)setUseFamilyCirclePhotos:(BOOL)arg1 ;
-(BOOL)useFamilyCirclePhotosLoaded;
-(void)setUseFamilyCirclePhotosLoaded:(BOOL)arg1 ;
-(void)didStartSharingMyLocationWithHandle:(id)arg1 ;
-(void)didStopSharingMyLocationWithHandle:(id)arg1 ;
-(void)didUpdateHidingStatus:(BOOL)arg1 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)didUpdateActiveDeviceList:(id)arg1 ;
-(void)didReceiveServerError:(id)arg1 ;
-(void*)addressBook;
-(NSArray *)familyMembers;
-(void)setFamilyMembers:(NSArray *)arg1 ;
@end

