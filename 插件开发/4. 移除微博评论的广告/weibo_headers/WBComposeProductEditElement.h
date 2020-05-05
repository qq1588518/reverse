//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeElement.h"

@class NSMutableArray, NSString, WBComposeProductEditElementView;

@interface WBComposeProductEditElement : WBComposeElement
{
    _Bool _editable;
    NSMutableArray *detail;
    NSString *_freight;
    NSString *_tburl;
}

@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) NSString *tburl; // @synthesize tburl=_tburl;
@property(retain, nonatomic) NSString *freight; // @synthesize freight=_freight;
@property(retain, nonatomic) NSMutableArray *detail; // @synthesize detail;
- (void).cxx_destruct;
- (void)removeSpec:(id)arg1;
- (void)addSpec:(id)arg1;
- (float)heightOfNormalCell;
- (float)heightOfExtraLabelView;
- (float)heightOfSpecView;
- (float)caculateHeight;
- (void)updateView;
- (void)viewDidLoad;
- (struct CGRect)viewInitFrame;
@property(readonly, nonatomic) WBComposeProductEditElementView *productElementView;
- (Class)viewClass;
- (unsigned long long)characterCount;
- (void)updateWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

