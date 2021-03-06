/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject {

	void* _echo;
	void* _echo_library;
	void* _echo_cluster_playlist;
	NSMutableData* _sharedBlobMutableData;

}
+(BOOL)hasGeniusFeatureEnabled;
+(BOOL)hasGeniusDataAvailable;
+(void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(id)playlistControllerWithSeedTracks:(id)arg1 error:(id*)arg2 ;
+(unsigned long long)defaultMinTrackCount;
+(unsigned long long)defaultTrackCount;
+(BOOL)useFakeGeniusData;
+(void)ignoreUnusedWarnings;
-(id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id*)arg3 ;
-(BOOL)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id*)arg2 ;
-(id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3 ;
-(BOOL)_canIncludeTrackInGeniusContainer:(id)arg1 ;
-(id)_sharedBlobMutableData;
@end

