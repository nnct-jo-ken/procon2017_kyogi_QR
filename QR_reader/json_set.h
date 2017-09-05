#pragma once

#include"json.hpp"
#include<Siv3D.hpp>

using json = nlohmann::json;

/// <summary>
/// �s�[�X�̃I�u�W�F�N�g�̍쐬
/// </summary>
/// <param name="creating_target">�쐬���json�I�u�W�F�N�g</param>
/// <param name="object_no">�쐬����I�u�W�F�N�g��id</param>
void object_init(json *creating_target, unsigned int object_no);

/// <summary>
/// ���_�̒�`
/// </summary>
/// <param name="set_target">���_���`����I�u�W�F�N�g�̂���json</param>
/// <param name="object_no">���_���`����I�u�W�F�N�g��id</param>
/// <param name="node">���_</param>
void node_set(json *set_target, unsigned int object_no, Array<Vec2> node);