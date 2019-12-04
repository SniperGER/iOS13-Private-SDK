//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, PKDrawing, PKStroke, PKTiledCanvasView, PKUndoCommand, UITouch;

@protocol PKTiledCanvasViewDelegate 

@optional
- (void)_canvasView:(PKTiledCanvasView *)arg1 showEditMenuFromLocation:(struct CGPoint)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 registerUndoCommand:(PKUndoCommand *)arg2;
- (void)_canvasViewDidEraseStrokes:(NSArray *)arg1;
- (_Bool)canvasView:(PKTiledCanvasView *)arg1 shouldBeginDrawingWithTouch:(UITouch *)arg2;
- (void)_canvasView:(PKTiledCanvasView *)arg1 didFinishRenderingStrokeOnRenderQueue:(PKStroke *)arg2 inDrawing:(PKDrawing *)arg3;
- (void)canvasViewDidFinishAnimatingStrokes:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidEndDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasViewDrawingMoved:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)_canvasViewWillBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasView:(PKTiledCanvasView *)arg1 endedStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 cancelledStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 beganStroke:(PKStroke *)arg2;
- (void)canvasViewWillBeginNewStroke:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end
