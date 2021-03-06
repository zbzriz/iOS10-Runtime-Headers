/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLRenderPassDescriptor * _descriptor;
    unsigned int  _encoderCount;
    MTLTelemetryCommandBuffer * _telemetryCommandBuffer;
    MTLTelemetryDevice * _telemetryDevice;
}

- (void).cxx_destruct;
- (void)endEncoding;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;
- (id)renderCommandEncoder;

@end
