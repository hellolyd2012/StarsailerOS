// 创建于2024.11.1 
// StarsailerOS X86 Boot MultiBoot头文件
// 代码遵循GNU GPLV2发布

#ifndef StarsailerOS_MultiBoot_H
#define StarsailerOS_MultiBoot_H

#define MAGIC 0x1BADB002 // MultiBoot MAGIC 魔数
#define ALI 0x03 // 对齐
#define CHECKSUM(Flags) -(MAGIC + Flags) // 校验和

#endif // StarsailerOS_MultiBoot_H