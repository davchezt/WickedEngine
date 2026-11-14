#pragma once

namespace dummy
{
	void draw_male(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_female(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_soldier(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_direction(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_waypoint(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_pickup(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_vehicle(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
	void draw_poi(const XMMATRIX& world, const XMMATRIX& VP, const XMFLOAT4& color, bool depth, wi::graphics::CommandList cmd, const wi::primitive::Frustum& frustum);
}
