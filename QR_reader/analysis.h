#pragma once

#include<Siv3D.hpp>

/// <summary>
/// ���_���W�̎擾
/// </summary>
/// <param name="piece">���_���</param>
/// <returns>���_�̔z��</returns>
Array<Vec2> get_node(String piece);

/// <summary>
/// QR���̉�́��s�[�X�̏�񂲂Ƃɕ���
/// </summary>
/// <param name="decoded">�f�R�[�h�����f�[�^</param>
/// <returns>�s�[�X���̔z��</returns>
Array<String> get_pieceinfo(Array<String> decoded);