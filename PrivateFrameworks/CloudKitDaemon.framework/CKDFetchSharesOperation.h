/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchSharesOperation : CKDOperation  {
    bool_isFetchAllSharesOperation;
    NSArray *_shares;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareFetchedProgressBlock;

    NSArray *_shareIDsToFetch;
}

@property(retain) NSArray * shares;
@property(copy) id shareFetchedProgressBlock;
@property(retain) NSArray * shareIDsToFetch;
@property bool isFetchAllSharesOperation;


- (void)_handleShareFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)shareFetchedProgressBlock;
- (void)setShareFetchedProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setShares:(id)arg1;
- (id)shares;
- (id)shareIDsToFetch;
- (bool)isFetchAllSharesOperation;
- (void)setShareIDsToFetch:(id)arg1;
- (void)setIsFetchAllSharesOperation:(bool)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void).cxx_destruct;

@end