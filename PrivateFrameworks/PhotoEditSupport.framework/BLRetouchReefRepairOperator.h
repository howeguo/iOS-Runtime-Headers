/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchReefRepairOperator : NSObject {
    int _brushSize;
    void *_buffer;
    int _height;
    void *_maskBuffer;
    int _maskHeight;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _maskRect;
    int _maskRowBytes;
    int _maskWidth;
    int _rowBytes;
    int _width;
}

+ (int)borderWithBrushSize:(int)arg1;

- (id).cxx_construct;
- (struct CGPoint { float x1; float x2; })analyzeOffset;
- (id)initWithRepairSourceData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)repair;
- (void)repairWithOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setBrushSize:(int)arg1;
- (void)setMaskData:(void*)arg1 rowBytes:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)setMaskRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
