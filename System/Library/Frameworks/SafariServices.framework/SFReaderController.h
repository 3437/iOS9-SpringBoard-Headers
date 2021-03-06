/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:43 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFReaderEventsListener.h>
#import <libobjc.A.dylib/SFReaderContext.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol SFReaderWebProcessControllerProtocol, SFReaderControllerDelegate;
@class _WKRemoteObjectInterface, WBSReaderFontManager, WKWebView, NSString;

@interface SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate> {

	id<SFReaderWebProcessControllerProtocol> _readerControllerProxy;
	_WKRemoteObjectInterface* _eventsListenerInterface;
	WBSReaderFontManager* _fontManager;
	BOOL _readerAvailable;
	WKWebView* _webView;
	id<SFReaderControllerDelegate> _delegate;

}

@property (__weak,readonly) WKWebView * webView;                         //@synthesize webView=_webView - In the implementation block
@property (__weak) id<SFReaderControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReaderAvailable) BOOL readerAvailable;               //@synthesize readerAvailable=_readerAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadNewArticle;
-(void)setReaderFont:(id)arg1 ;
-(void)setReaderTheme:(id)arg1 ;
-(void)increaseReaderTextSize;
-(void)decreaseReaderTextSize;
-(void)_setUpReaderActivityListener;
-(void)didDetermineReaderAvailability:(BOOL)arg1 ;
-(void)didSetReaderConfiguration:(id)arg1 ;
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2 ;
-(void)didCollectReaderContentForMail:(id)arg1 ;
-(void)didPrepareReaderContentForPrinting:(id)arg1 ;
-(void)didPrepareReaderContentForDisplay:(id)arg1 ;
-(void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 userVisibleWidth:(double)arg3 isViewingArchive:(BOOL)arg4 ;
-(void)setReaderUserVisibleWidth:(double)arg1 ;
-(id)readerControllerProxy;
-(void)createArticleFinder;
-(id)readerURL;
-(BOOL)isReaderAvailable;
-(BOOL)isLoadingNextPage;
-(void)stopLoadingNextPage;
-(BOOL)hasMultiplePages;
-(void)clearReaderWebView;
-(BOOL)shouldCreateArticleFinder;
-(void)activateReader;
-(void)deactivateReaderNow:(unsigned long long)arg1 ;
-(id)scrollPositionInformation;
-(void)clearAvailability;
-(void)clearUnusedReaderResourcesSoon;
-(id)fontManager;
-(void)setReaderLanguageTag:(id)arg1 ;
-(void)didCreateReaderWebView:(id)arg1 ;
-(void)setReaderAvailable:(BOOL)arg1 ;
-(void)setDelegate:(id<SFReaderControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SFReaderControllerDelegate>)delegate;
-(WKWebView *)webView;
-(id)configuration;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(id)initWithWebView:(id)arg1 ;
@end

