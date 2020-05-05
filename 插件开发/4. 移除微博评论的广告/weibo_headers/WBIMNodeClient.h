//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSOperationQueue, WBIMConnectionPool, WBIMNodeProvider;
@protocol WBIMNodeClientDelegate;

@interface WBIMNodeClient : NSObject
{
    _Bool _isFromChat;
    id <WBIMNodeClientDelegate> _delegate;
    NSArray *_postNodesArr;
    NSMutableArray *_pushNodesArr;
    WBIMNodeProvider *_provider;
    WBIMConnectionPool *_pool;
    WBIMConnectionPool *_poolForChar;
    NSOperationQueue *_queue;
    double _expireTimestamp;
}

@property(nonatomic) _Bool isFromChat; // @synthesize isFromChat=_isFromChat;
@property(nonatomic) double expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) WBIMConnectionPool *poolForChar; // @synthesize poolForChar=_poolForChar;
@property(retain, nonatomic) WBIMConnectionPool *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) WBIMNodeProvider *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableArray *pushNodesArr; // @synthesize pushNodesArr=_pushNodesArr;
@property(retain, nonatomic) NSArray *postNodesArr; // @synthesize postNodesArr=_postNodesArr;
@property(nonatomic) __weak id <WBIMNodeClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPushNodesExpired;
- (void)setPostNodes:(id)arg1;
- (id)postNodes;
- (id)pushNodes;
- (void)fetchNodes:(id)arg1 containerType:(id)arg2;
- (void)fetchNodes:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

