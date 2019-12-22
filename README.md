### Graphics Magic公众号文章--在UE4材质中高效实现经典缓动函数项目源文件
#### 源码详细解释请参考Graphics Magic公众号文章--在UE4材质中高效实现经典缓动函数
#### 引擎版本UE 4.23
#### 欢迎关注微信公众号Graphics Magic，定期分享游戏特效相关技术

#### 项目内容
- 材质M_UniformScale为三个轴均匀缩放的效果
- 材质M_ScaleZ为只沿着世界Z方向缩放的效果
- 材质M_ScaleZ_Rot_Correction为沿物体Local坐标系的Z方向缩放的效果

- 文件夹M_Curve_Creators下的Mat_EaseOutBounce材质中实现了EaseOutBounce
- 文件夹M_Curve_Creators下的Mat_Sinc材质中实现了Sinc函数
- CurveCreator（Blueprint Actor）用来将上面的两个Material Bake到RenderTarget中
- Generated_RTS_AND_TEXS文件夹用于存放Bake出的RT及静态Texture

- VisulizeCurve文件夹中的材质用来可视化EaseOutBounce算法的结果