//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TYDrawStorageProtocol-Protocol.h"

@class NSString;

@interface TYDrawStorage : NSObject <TYDrawStorageProtocol>
{
    double _fontAscent;
    double _fontDescent;
    struct _NSRange _fixRange;
    long long _tag;
    unsigned long long _drawAlignment;
    struct _NSRange _range;
    struct _NSRange _realRange;
    struct CGSize _size;
    struct UIEdgeInsets _margin;
}

@property(nonatomic) unsigned long long drawAlignment; // @synthesize drawAlignment=_drawAlignment;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct _NSRange realRange; // @synthesize realRange=_realRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void)addRunDelegateWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (struct _NSRange)fixRange:(struct _NSRange)arg1 replaceStringNum:(long long)arg2;
- (void)setAppropriateAlignment;
- (id)spaceReplaceString;
- (void)DrawRunDealloc;
- (double)getDrawRunDescentHeight;
- (double)getDrawRunWidth;
- (double)getDrawRunAscentHeight;
- (void)drawStorageWithRect:(struct CGRect)arg1;
- (id)appendTextStorageAttributedString;
- (void)addTextStorageWithAttributedString:(id)arg1;
- (void)setTextfontAscent:(double)arg1 descent:(double)arg2;
- (void)currentReplacedStringNum:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

