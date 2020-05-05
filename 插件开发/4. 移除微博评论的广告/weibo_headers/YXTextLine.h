//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YXTextLine : NSObject
{
    double _firstGlyphPos;
    _Bool _vertical;
    unsigned long long _index;
    unsigned long long _row;
    NSArray *_verticalRotateRange;
    const struct __CTLine *_CTLine;
    double _ascent;
    double _descent;
    double _leading;
    double _lineWidth;
    double _trailingWhitespaceWidth;
    NSArray *_attachments;
    NSArray *_attachmentRanges;
    NSArray *_attachmentRects;
    struct _NSRange _range;
    struct CGPoint _position;
    struct CGRect _bounds;
}

+ (id)lineWithCTLine:(struct __CTLine *)arg1 position:(struct CGPoint)arg2 vertical:(_Bool)arg3;
@property(readonly, nonatomic) NSArray *attachmentRects; // @synthesize attachmentRects=_attachmentRects;
@property(readonly, nonatomic) NSArray *attachmentRanges; // @synthesize attachmentRanges=_attachmentRanges;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, nonatomic) double trailingWhitespaceWidth; // @synthesize trailingWhitespaceWidth=_trailingWhitespaceWidth;
@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) double leading; // @synthesize leading=_leading;
@property(readonly, nonatomic) double descent; // @synthesize descent=_descent;
@property(readonly, nonatomic) double ascent; // @synthesize ascent=_ascent;
@property(nonatomic) struct CGPoint position; // @synthesize position=_position;
@property(readonly, nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) _Bool vertical; // @synthesize vertical=_vertical;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) const struct __CTLine *CTLine; // @synthesize CTLine=_CTLine;
@property(retain, nonatomic) NSArray *verticalRotateRange; // @synthesize verticalRotateRange=_verticalRotateRange;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) double right;
@property(readonly, nonatomic) double left;
@property(readonly, nonatomic) double bottom;
@property(readonly, nonatomic) double top;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) struct CGSize size;
- (void)reloadBounds;
- (void)setCTLine:(const struct __CTLine *)arg1;
- (void)dealloc;

@end

